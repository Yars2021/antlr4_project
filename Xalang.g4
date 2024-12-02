grammar Xalang;


program
    :   code_instruction* EOF
    ;

code_instruction
    :   var_def Semicolon               # code_instruction_var_def
    |   operator_rule                   # code_instruction_operator
    ;

var_def
    :   'AAAXAXAXA_' var_names
    ;

var_names
    :   var_name_init (',' var_name_init)*
    ;

var_name_init
    :   Ident                           # var_create
    |   Ident '[' IntLiteral ']'        # var_array_create
    |   Ident '=' expression            # var_create_assign
    ;

operator_rule
    :   expression Semicolon            # op_rule_expression
    |   print_op Semicolon              # op_rule_print
    |   if_op                           # op_rule_if
    |   for_op                          # op_rule_for
    |   while_op                        # op_rule_while
    ;

for_operators
    :   for_operator (',' for_operator)*
    ;

for_operator
    :   var_def                         # for_var_create
    |   expression                      # for_expression
    ;

code_block
    :   code_instruction*
    ;

print_op
    :   'AXXAAXAAAXAX_' '(' expression ')'
    ;

if_op
    :   'AAAAXA_' '(' expression ')' '{' code_block '}' ('AAXAAAAAAXA_' '(' expression ')' '{' code_block '}')* ('AAXAAAAAA_' '{' code_block '}')?
    ;

for_op
    :   'AAXAXXXAXA_' '(' for_operators Semicolon expression Semicolon for_operators ')' '{' code_instruction* '}'
    ;

while_op
    :   'AXXAAAAAAAXAAA_' '(' expression ')' '{' code_instruction* '}'
    ;

expression
    :   '(' expression ')'                                                                                                                  # expression_brackets
    |   literal                                                                                                                             # expression_literal
    |   Ident                                                                                                                               # expression_var
    |   expression '[' expression ']'                                                                                                       # index_expression
    |   '-' expression                                                                                                                      # unary_minus_expression
    |   op=('!' | '~') expression                                                                                                           # not_expression
    |   op=('++' | '--') expression                                                                                                         # prefix_modifier_expression
    |   expression op=('++' | '--')                                                                                                         # postfix_modifier_expression
    |   expression op=('**' | '*' | '/' | '%' | 'div') expression                                                                           # mul_expression
    |   expression op=('+' | '-') expression                                                                                                # add_expression
    |   expression op=('<<' | '>>') expression                                                                                              # shift_expression
    |   expression op=('>' | '<' | '>=' | '<=') expression                                                                                  # comparison_expression
    |   expression op=('==' | '!=') expression                                                                                              # equality_expression
    |   expression '&' expression                                                                                                           # bit_and_expression
    |   expression op=('^' | '|') expression                                                                                                # bit_or_expression
    |   expression '&&' expression                                                                                                          # logic_and_expression
    |   expression op=('^^' | '||') expression                                                                                              # logic_or_expression
    |   expression '?' expression ':' expression                                                                                            # ternary_op_expression
    |   Ident op=('*=' | '/=' | '%=' | 'div=' | '+=' | '-=' | '&=' | '|=' | '^=' | '<<=' | '>>=') expression                                # modified_assign_expression
    |   Ident '[' expression ']' op=('*=' | '/=' | '%=' | 'div=' | '+=' | '-=' | '&=' | '|=' | '^=' | '<<=' | '>>=') expression             # modified_assign_expression
    |   Ident '=' expression                                                                                                                # assign_expression
    |   Ident '[' expression ']' '=' expression                                                                                             # assign_expression
    ;

literal
    :   IntLiteral                      # int_literal
    |   BoolLiteral                     # bool_literal
    |   StringLiteral                   # string_literal
    ;

Ident: ('a'..'z' | 'A'..'Z' | '_') ('a'..'z' | 'A'..'Z' | '_' | '0'..'9')* ;
IntLiteral: '-'? ('0'..'9')+ ;
BoolLiteral: 'True' | 'False' ;
StringLiteral: '"' .*? '"' ;
Semicolon: ':)' ;
Whitespace: (' ' | '\t' | '\r' | '\n') -> skip ;
BlockComment: '/*' .*? '*/' -> skip ;
LineComment: '//' ~[\r\n]* -> skip ;
