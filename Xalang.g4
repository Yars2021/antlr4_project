grammar Xalang;


program
    :   code_instruction* EOF
    ;

code_instruction
    :   var_def Semicolon
    |   operator_rule
    ;

var_def
    :   type var_names
    ;

var_names
    :   var_name_init
    |   var_name_init ',' var_names
    ;

var_name_init
    :   Ident
    |   Ident '=' expression
    ;

operator_rule
    :   assign Semicolon
    |   print Semicolon
    |   if_op
    |   for_op
    |   while_op
    ;

for_operator_chain
    :   for_operator (',' for_operator_chain)*
    ;

for_operator
    :   var_def
    |   assign
    ;

assign
    :   Ident '=' expression
    |   Ident op_assign expression
    |   Ident postfix_expression
    ;

print
    :   'AXXAAXAAAXAX_' '(' expression ')'
    ;

if_op
    :   'AAAAXA_' '(' expression ')' '{' operator_rule* '}' ('AAXAAAAAAXA_' '(' expression ')' '{' code_instruction* '}')* ('AAXAAAAAA_' '{' code_instruction* '}')?
    ;

for_op
    :   'AAXAXXXAXA_' '(' for_operator_chain Semicolon expression Semicolon for_operator_chain ')' '{' code_instruction* '}'
    ;

while_op
    :   'AXXAAAAAAAXAAA_' '(' expression ')' '{' code_instruction* '}'
    ;

expression
    :   '(' expression ')'
    |   unary_sign expression
    |   expression binary_sign expression
    |   Ident
    |   literal
    ;

unary_sign
    :   '-'
    |   '!'
    |   '~'
    ;

binary_sign
    :   '+'
    |   '-'
    |   '*'
    |   '**'
    |   '/'
    |   'div'
    |   '%'
    |   '&'
    |   '|'
    |   '^'
    |   '=='
    |   '!='
    |   '>'
    |   '<'
    |   '>='
    |   '<='
    ;

op_assign
    :   '+='
    |   '-='
    |   '*='
    |   '/='
    |   '%='
    ;

postfix_expression
    :   '++'
    |   '--'
    ;

type
    :   type_int
    |   type_bool
    |   type_str
    ;

type_int
    :   'AAXAX'
    ;

type_bool
    :  'XAAAXXXXXXAXAA'
    ;

type_str
    :   'AAAXAXA'
    ;

literal
    :   IntLiteral
    |   BoolLiteral
    |   StringLiteral
    ;

Ident: ('a'..'z' | 'A'..'Z' | '_') ('a'..'z' | 'A'..'Z' | '_' | '0'..'9')* ;
IntLiteral: '-'? ('0'..'9')+ ;
BoolLiteral: 'True' | 'False' ;
StringLiteral: '“' .*? '“' ;
Semicolon: ':)' ;
Space: (' ' | '\t' | '\r' | '\n') -> skip ;
BlockComment: '/*' .*? '*/' -> skip ;
LineComment: '//' ~[\r\n]* -> skip ;
