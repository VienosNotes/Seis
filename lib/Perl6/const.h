#define PConst(c) newCONSTSUB(stash, #c, newSViv(c))
static void setup_pvip_const(pTHX) {
  HV* stash = gv_stashpvn("Perl6::PVIP", strlen("Perl6::PVIP"), TRUE);
    PConst(PVIP_NODE_UNDEF);
    PConst(PVIP_NODE_RANGE);
    PConst(PVIP_NODE_REDUCE);
    PConst(PVIP_NODE_INT);
    PConst(PVIP_NODE_NUMBER);
    PConst(PVIP_NODE_STATEMENTS);
    PConst(PVIP_NODE_DIV);
    PConst(PVIP_NODE_MUL);
    PConst(PVIP_NODE_ADD);
    PConst(PVIP_NODE_SUB);
    PConst(PVIP_NODE_IDENT);
    PConst(PVIP_NODE_FUNCALL);
    PConst(PVIP_NODE_ARGS);
    PConst(PVIP_NODE_STRING);
    PConst(PVIP_NODE_MOD);
    PConst(PVIP_NODE_VARIABLE);
    PConst(PVIP_NODE_MY);
    PConst(PVIP_NODE_OUR);
    PConst(PVIP_NODE_BIND);
    PConst(PVIP_NODE_STRING_CONCAT);
    PConst(PVIP_NODE_IF);
    PConst(PVIP_NODE_EQV);
    PConst(PVIP_NODE_EQ);
    PConst(PVIP_NODE_NE);
    PConst(PVIP_NODE_LT);
    PConst(PVIP_NODE_LE);
    PConst(PVIP_NODE_GT);
    PConst(PVIP_NODE_GE);
    PConst(PVIP_NODE_ARRAY);
    PConst(PVIP_NODE_ATPOS);
    PConst(PVIP_NODE_METHODCALL);
    PConst(PVIP_NODE_FUNC);
    PConst(PVIP_NODE_PARAMS);
    PConst(PVIP_NODE_RETURN);
    PConst(PVIP_NODE_ELSE);
    PConst(PVIP_NODE_WHILE);
    PConst(PVIP_NODE_DIE);
    PConst(PVIP_NODE_ELSIF);
    PConst(PVIP_NODE_LIST);
    PConst(PVIP_NODE_FOR);
    PConst(PVIP_NODE_UNLESS);
    PConst(PVIP_NODE_NOT);
    PConst(PVIP_NODE_CONDITIONAL);
    PConst(PVIP_NODE_NOP);
    PConst(PVIP_NODE_STREQ);
    PConst(PVIP_NODE_STRNE);
    PConst(PVIP_NODE_STRGT);
    PConst(PVIP_NODE_STRGE);
    PConst(PVIP_NODE_STRLT);
    PConst(PVIP_NODE_STRLE);
    PConst(PVIP_NODE_POW);
    PConst(PVIP_NODE_CLARGS);
    PConst(PVIP_NODE_HASH);
    PConst(PVIP_NODE_PAIR);
    PConst(PVIP_NODE_ATKEY);
    PConst(PVIP_NODE_LOGICAL_AND);
    PConst(PVIP_NODE_LOGICAL_OR);
    PConst(PVIP_NODE_LOGICAL_XOR);
    PConst(PVIP_NODE_BIN_AND);
    PConst(PVIP_NODE_BIN_OR);
    PConst(PVIP_NODE_BIN_XOR);
    PConst(PVIP_NODE_BLOCK);
    PConst(PVIP_NODE_LAMBDA);
    PConst(PVIP_NODE_USE);
    PConst(PVIP_NODE_MODULE);
    PConst(PVIP_NODE_CLASS);
    PConst(PVIP_NODE_METHOD);
    PConst(PVIP_NODE_UNARY_PLUS);
    PConst(PVIP_NODE_UNARY_MINUS);
    PConst(PVIP_NODE_IT_METHODCALL);
    PConst(PVIP_NODE_LAST);
    PConst(PVIP_NODE_NEXT);
    PConst(PVIP_NODE_REDO);
    PConst(PVIP_NODE_POSTINC);
    PConst(PVIP_NODE_POSTDEC);
    PConst(PVIP_NODE_PREINC);
    PConst(PVIP_NODE_PREDEC);
    PConst(PVIP_NODE_UNARY_BITWISE_NEGATION);
    PConst(PVIP_NODE_BRSHIFT);
    PConst(PVIP_NODE_BLSHIFT);
    PConst(PVIP_NODE_CHAIN);
    PConst(PVIP_NODE_INPLACE_ADD);
    PConst(PVIP_NODE_INPLACE_SUB);
    PConst(PVIP_NODE_INPLACE_MUL);
    PConst(PVIP_NODE_INPLACE_DIV);
    PConst(PVIP_NODE_INPLACE_POW);
    PConst(PVIP_NODE_INPLACE_MOD);
    PConst(PVIP_NODE_INPLACE_BIN_OR);
    PConst(PVIP_NODE_INPLACE_BIN_AND);
    PConst(PVIP_NODE_INPLACE_BIN_XOR);
    PConst(PVIP_NODE_INPLACE_BLSHIFT);
    PConst(PVIP_NODE_INPLACE_BRSHIFT);
    PConst(PVIP_NODE_INPLACE_CONCAT_S);
    PConst(PVIP_NODE_REPEAT_S);
    PConst(PVIP_NODE_INPLACE_REPEAT_S);
    PConst(PVIP_NODE_STRINGIFY);
    PConst(PVIP_NODE_TRY);
    PConst(PVIP_NODE_REF);
    PConst(PVIP_NODE_MULTI);
    PConst(PVIP_NODE_UNARY_BOOLEAN);
    PConst(PVIP_NODE_UNARY_UPTO);
    PConst(PVIP_NODE_STDOUT);
    PConst(PVIP_NODE_STDERR);
    PConst(PVIP_NODE_SCALAR_DEREF);
    PConst(PVIP_NODE_TW_INC);
    PConst(PVIP_NODE_META_METHOD_CALL);
    PConst(PVIP_NODE_REGEXP);
    PConst(PVIP_NODE_SMART_MATCH);
    PConst(PVIP_NODE_NOT_SMART_MATCH);
    PConst(PVIP_NODE_PERL5_REGEXP);
    PConst(PVIP_NODE_TRUE);
    PConst(PVIP_NODE_FALSE);
    PConst(PVIP_NODE_TW_VM);
    PConst(PVIP_NODE_HAS);
    PConst(PVIP_NODE_ATTRIBUTE_VARIABLE);
    PConst(PVIP_NODE_FUNCREF);
    PConst(PVIP_NODE_PATH);
    PConst(PVIP_NODE_TW_PACKAGE);
    PConst(PVIP_NODE_TW_CLASS);
    PConst(PVIP_NODE_TW_MODULE);
    PConst(PVIP_NODE_TW_OS);
    PConst(PVIP_NODE_TW_PID);
    PConst(PVIP_NODE_TW_PERLVER);
    PConst(PVIP_NODE_TW_OSVER);
    PConst(PVIP_NODE_TW_CWD);
    PConst(PVIP_NODE_TW_EXECUTABLE_NAME);
    PConst(PVIP_NODE_TW_ROUTINE);
    PConst(PVIP_NODE_SLANGS);
    PConst(PVIP_NODE_LOGICAL_ANDTHEN);
    PConst(PVIP_NODE_VALUE_IDENTITY);
    PConst(PVIP_NODE_CMP);
    PConst(PVIP_NODE_SPECIAL_VARIABLE_REGEXP_MATCH);
    PConst(PVIP_NODE_SPECIAL_VARIABLE_EXCEPTIONS);
    PConst(PVIP_NODE_ENUM);
    PConst(PVIP_NODE_NUM_CMP);
    PConst(PVIP_NODE_UNARY_FLATTEN_OBJECT);
    PConst(PVIP_NODE_COMPLEX);
    PConst(PVIP_NODE_ROLE);
    PConst(PVIP_NODE_IS);
    PConst(PVIP_NODE_DOES);
    PConst(PVIP_NODE_JUNCTIVE_AND);
    PConst(PVIP_NODE_JUNCTIVE_SAND);
    PConst(PVIP_NODE_JUNCTIVE_OR);
    PConst(PVIP_NODE_UNICODE_CHAR);
    PConst(PVIP_NODE_STUB);
    PConst(PVIP_NODE_EXPORT);
    PConst(PVIP_NODE_PARAM);
    PConst(PVIP_NODE_BITWISE_OR);
    PConst(PVIP_NODE_BITWISE_AND);
    PConst(PVIP_NODE_BITWISE_XOR);
    PConst(PVIP_NODE_VARGS);
    PConst(PVIP_NODE_WHATEVER);
    PConst(PVIP_NODE_TW_ENV);
    PConst(PVIP_NODE_ARRAY_DEREF);
    PConst(PVIP_NODE_RAND);
    PConst(PVIP_NODE_END);
    PConst(PVIP_NODE_BEGIN);
    PConst(PVIP_NODE_IS_DIVISIBLE_BY);
    PConst(PVIP_NODE_NOT_DIVISIBLE_BY);
    PConst(PVIP_NODE_CONTAINER_IDENTITY);
    PConst(PVIP_NODE_Z);
    PConst(PVIP_NODE_SUBMETHOD);
    PConst(PVIP_NODE_BINDAND_MAKE_READONLY);
    PConst(PVIP_NODE_LIST_ASSIGNMENT);
    PConst(PVIP_NODE_TW_A);
    PConst(PVIP_NODE_TW_B);
    PConst(PVIP_NODE_TW_C);
    PConst(PVIP_NODE_SO);
    PConst(PVIP_NODE_GCD);
    PConst(PVIP_NODE_KEEP);
    PConst(PVIP_NODE_UNDO);
    PConst(PVIP_NODE_NOW);
    PConst(PVIP_NODE_UNTIL);
    PConst(PVIP_NODE_TIME);
    PConst(PVIP_NODE_AUGMENT);
    PConst(PVIP_NODE_IS_COPY);
    PConst(PVIP_NODE_LEG);
    PConst(PVIP_NODE_NEED);
    PConst(PVIP_NODE_INTEGER_DIVISION);
    PConst(PVIP_NODE_LCM);
    PConst(PVIP_NODE_PACKAGE);
    PConst(PVIP_NODE_MINMAX);
    PConst(PVIP_NODE_SEQUENCE);
    PConst(PVIP_NODE_CONTEXTUALIZER_SCALAR);
    PConst(PVIP_NODE_CONTEXTUALIZER_ARRAY);
    PConst(PVIP_NODE_CONTEXTUALIZER_HASH);
    PConst(PVIP_NODE_TW_TMPDIR);
    PConst(PVIP_NODE_IS_RW);
    PConst(PVIP_NODE_IS_REF);
    PConst(PVIP_NODE_PI);
    PConst(PVIP_NODE_E);
    PConst(PVIP_CATEGORY_UNKNOWN);
    PConst(PVIP_CATEGORY_STRING);
    PConst(PVIP_CATEGORY_INT);
    PConst(PVIP_CATEGORY_NUMBER);
    PConst(PVIP_CATEGORY_CHILDREN);
#undef PConst
}
