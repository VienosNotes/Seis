package Rokugo::BuiltinFunctions;
use strict;
use warnings;
use utf8;
use 5.010_001;
use Time::HiRes ();

sub end { @{$_[0]}-1 }
sub end_list { @_-1 }

sub slurp {
    if (@_==1) {
        my $fname = shift;
        open my $fh, '<', $fname
            or Carp::croak("Can't open '$fname' for reading: '$!'");
        scalar(do { local $/; <$fh> })
    } else {
        ...
    }
}

sub open :method {
    my $mode = @_==2 && $_[1]->key eq 'w' ? '>' : '<';
    CORE::open my $fh, $mode, $_[0];
    return Rokugo::IO->_new_with_fh($_[0], $fh);
}

sub get :method {
    my $stuff = shift;
    return $stuff->get() if Scalar::Util::blessed($stuff);
    my $line = <$stuff>;
    if (defined $line) {
        $line =~ s/\n//;
    }
    $line;
}

sub close:method {
    my $stuff = shift;
    if (UNIVERSAL::isa($stuff, 'Rokugo::IO')) {
        $stuff->close;
    } else {
        CORE::close($stuff);
    }
}

sub getc:method {
    my $stuff = shift;
    if (UNIVERSAL::isa($stuff, 'Rokugo::IO')) {
        $stuff->getc;
    } else {
        CORE::getc($stuff);
    }
}

sub now:method {
    Rokugo::Instant->_new(Time::HiRes::time())
}

sub gcd:method {
    int(Math::BigInt::bgcd(@_) - 0)
}

sub any:method {
    Rokugo::Any->_new(@_);
}

sub is_prime {
    require Math::Prime::Util;
    Math::Prime::Util::is_prime($_[0])
}

sub ords {
    my @ret = map { ord($_) } split //, $_[0];
    wantarray ? @ret : \@ret;
}

1;

