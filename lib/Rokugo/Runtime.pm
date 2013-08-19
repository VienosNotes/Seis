package Rokugo::Runtime;
use strict;
use warnings;
use utf8;
use 5.010_001;

use Rokugo::Object;
use Rokugo::Array;
use Rokugo::Int;
use Rokugo::Real;
use Rokugo::Exceptions;
use Rokugo::Str;
use Rokugo::Hash;
use Rokugo::MetaClass;
use Rokugo::Class;
use Rokugo::Range;
use Rokugo::Undef;
use Rokugo::Buf;
use Rokugo::Whatever;
use Rokugo::Pair;
use Rokugo::IO::Path;

use Rokugo::BuiltinFunctions;
use Scalar::Util ();
use B ();
use Cwd(); # for $*CWD

{
    package # hide from PAUSE
        Complex;
    sub new {
        my ($class, $x, $y) = @_;
        bless {x => $x, y => $y}, $class;
    }
}

sub builtin_eval {
    my ($code) = @_;
    my $compiler = Rokugo::Compiler->new();
    my $compiled = $compiler->compile($code);
    my $ret = eval $compiled;
    if ($@) {
        Rokugo::Exception::CompilationFailed->new("$@");
    }
    return $ret;
}

sub builtin_elems { 0+@_ }

{
    package Rokugo::Match;
    sub DESTROY { }
    sub TIEARRAY {
        my $class = shift;
        bless {}, $class;
    }
    sub FETCHSIZE {
        1 + @-;
    }
    sub FETCH($$) {
        my ($self, $index) = @_;
        return ${^MATCH} if $index == 0;
        return $-[$index-1];
    }
}

# This variable emulates $/ in Perl6.
our @REGEXP_MATCH;
tie @REGEXP_MATCH, 'Rokugo::Match';

package # hide frm PAUSE
    IO::Path::Cygwin {
    use File::Basename ();
    use File::Spec::Win32;

    sub new {
        my ($class, $path) = @_;
        bless \$path, $class;
    }
    sub volume {
        [File::Spec::Win32->splitpath(${$_[0]})]->[0];
    }
    sub directory {
        my $dir = [File::Spec::Win32->splitpath(${$_[0]})]->[1];
        $dir .= "/" unless $dir =~ /\/\z/;
        $dir;
    }
    sub basename {
        File::Basename::basename(${$_[0]});
    }
}

# Normally, Rokugo doesn't call this method for calling methods.
# It's only needed if the method name contains '-' character.
sub call_method {
    my ($invocant, $methodname, @args) = @_;
    Carp::croak("Invocant is undefined.") unless defined $invocant;
    if (Scalar::Util::blessed $invocant) {
        my $code = $invocant->can($methodname);
        @_ = ($invocant, @args);
        goto $code;
    } else {
        my $flags = B::svref_2object(\$invocant)->FLAGS;
        if ($flags | B::SVp_IOK) {
            my $code = Rokugo::Int->can($methodname);
            Carp::croak("Can't call method: $methodname") unless $code;
            @_ = ($invocant, @args);
            goto $code;
        } else {
            ...
        }
    }
}

1;

