%{
#include <stdio.h>
#include <string.h>

int yyerror (char *);
extern int yylex (void);
extern char* yytext;
%}
%name parse

%token KEYWORD_UNSIGNED KEYWORD_BREAK KEYWORD_RETURN KEYWORD_VOID KEYWORD_CASE KEYWORD_FLOAT KEYWORD_SHORT KEYWORD_CHAR KEYWORD_FOR KEYWORD_SIGNED KEYWORD_WHILE KEYWORD_GOTO KEYWORD_BOOL KEYWORD_CONTINUE KEYWORD_IF KEYWORD_DEFAULT KEYWORD_DO KEYWORD_INT KEYWORD_SWITCH KEYWORD_DOUBLE KEYWORD_LONG KEYWORD_ELSE KEYWORD_MATRIX

%token IDENTIFIER
%token CONSTANT_ZERO
%token CONSTANT_FLOATING
%token CONSTANT_CHARACTER
%token CONSTANT_INTEGER

%token STRING_LITERAL

%token PUNC_LEFT_SQUARE_BRACKET
%token PUNC_RIGHT_SQUARE_BRACKET
%token PUNC_LEFT_SMALL_BRACKET
%token PUNC_RIGHT_SMALL_BRACKET
%token PUNC_LEFT_CURLY_BRACKET
%token PUNC_RIGHT_CURLY_BRACKET
%token PUNC_DOT
%token PUNC_RIGHT_ARROW
%token PUNC_INCREMENT
%token PUNC_DECREMENT
%token PUNC_BITWISE_AND
%token PUNC_MULTIPLY
%token PUNC_PLUS
%token PUNC_MINUS
%token PUNC_BACKSLASH
%token PUNC_MODULO
%token PUNC_SHIFTLEFT
%token PUNC_SHIFTRIGHT
%token PUNC_LESSTHAN
%token PUNC_GREATERTHAN
%token PUNC_LESSTHAN_EQUAL
%token PUNC_GREATERTHAN_EQUAL
%token PUNC_EQUALITY_OPERATOR
%token PUNC_NOT_EQUAL
%token PUNC_WEDGE
%token PUNC_BITWISE_OR
%token PUNC_LOGICAL_AND
%token PUNC_LOGICAL_OR
%token PUNC_QUESTION_MARK
%token PUNC_COLON
%token PUNC_SEMICOLON
%token PUNC_EQUAL
%token PUNC_MULTIPLY_EQUAL
%token PUNC_DIVIDE_EQUAL
%token PUNC_MODULO_EQUAL
%token PUNC_PLUS_EQUAL
%token PUNC_MINUS_EQUAL
%token PUNC_SHIFTLEFT_EQUAL
%token PUNC_SHIFTRIGHT_EQUAL
%token PUNC_BITWISE_AND_EQUAL
%token PUNC_WEDGE_EQUAL
%token PUNC_BITWISE_OR_EQUAL
%token PUNC_COMMA
%token PUNC_DOT_SINGLE_QUATATION



%start translation_unit



%%

constant 					: 	CONSTANT_ZERO 																	{printf("constant ===> CONSTANT-ZERO\n");}
							|	CONSTANT_FLOATING 																{printf("constant ===> CONSTANT-FLOATING\n");}
							|	CONSTANT_CHARACTER 																{printf("constant ===> CONSTANT-CHARACTER\n");}
							|	CONSTANT_INTEGER 																{printf("constant ===> CONSTANT-INTEGER\n");}
							;


primary_expression			: IDENTIFIER 																		{ printf ("primary-expression ===>identifier \n"); }
							| constant																	{ printf ("primary-expression ===>constant \n"); }
							| STRING_LITERAL 																	{ printf ("primary-expression ===> string-literal\n"); }
							| PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET 						{ printf ("primary-expression ===> (expression)\n"); }
							;


postfix_expression			:	primary_expression 																					{ printf ("postfix-expression-expression ===>primary-expression \n"); }
							|	postfix_expression PUNC_LEFT_SQUARE_BRACKET expression PUNC_RIGHT_SQUARE_BRACKET 					{ printf ("postfix-expression ===>postfix-expression [ expression] \n"); }
							|	postfix_expression PUNC_LEFT_SMALL_BRACKET argument_expression_list_opt PUNC_RIGHT_SMALL_BRACKET 	{ printf ("postfix-expression ===>postfix_expression (argument-expression-list_opt)\n"); }
							|	postfix_expression PUNC_DOT IDENTIFIER 																{ printf ("postfix-expression ===>postfix-expression . identifier \n"); }
							|	postfix_expression PUNC_RIGHT_ARROW IDENTIFIER 														{ printf ("postfix-expression ===>postfix-expression ++ \n"); }
							|	postfix_expression PUNC_INCREMENT 																	{ printf ("postfix-expression ===>postfix-expression -- \n"); }
							|	postfix_expression PUNC_DECREMENT
							|	postfix_expression PUNC_DOT_SINGLE_QUATATION																	{ printf ("postfix-expression ===>postfix-expression ' \n"); }
							;

argument_expression_list 	:	assignment_expression 															{ printf ("argument-expression-list ===> assignment-expression \n"); }
							|	argument_expression_list PUNC_COMMA assignment_expression 						{ printf ("argument-expression-list ===>argument-expression-list , assignment-expression\n"); }
							;

unary_expression			:	postfix_expression  															{ printf ("unary-expression ===> postfix-expression \n"); }
							|	PUNC_INCREMENT unary_expression													{ printf ("unary-expression ===> ++ unary-expression \n"); }
							|	PUNC_DECREMENT unary_expression													{ printf ("unary-expression ===> -- unary-expression \n"); }
							|	unary_operator cast_expression 													{ printf ("unary-expression ===> unary-operator cast-expression \n"); }
							;


unary_operator				:	PUNC_BITWISE_AND 																{printf ("unary-operator ===> & \n");}
							|	PUNC_MULTIPLY                        											{printf ("unary-operator ===> * \n");}
							|	PUNC_PLUS 																		{printf ("unary-operator ===> + \n");}
							|	PUNC_MINUS 																		{printf ("unary-operator ===> - \n");}
							;


cast_expression				:	unary_expression 																{printf ("cast-expression ===> unary-expression\n");}
							;

multiplicative_expression	:	cast_expression 																{printf("multiplicative-expression ===> cast-expression\n");}
							|	multiplicative_expression PUNC_MULTIPLY cast_expression 						{printf("multiplicative-expression ===> multiplicative-expression * cast-expression\n");}
							|	multiplicative_expression PUNC_BACKSLASH cast_expression 						{printf("multiplicative-expression ===> multiplicative-expression / cast-expression\n");}
							|	multiplicative_expression PUNC_MODULO cast_expression 							{printf("multiplicative-expression ===> multiplicative-expression %% cast-expression\n");}
							;

additive_expression			:	multiplicative_expression 														{printf("additive_expression ===> multiplicative-expression\n");}
							|	additive_expression PUNC_PLUS multiplicative_expression 						{printf("additive_expression ===> additive-expression + multiplicative-expression\n");}
							|	additive_expression	PUNC_MINUS multiplicative_expression 						{printf("additive_expression ===> additive-expression - multiplicative-expression\n");}
							;

shift_expression			:	additive_expression 															{printf("shift-expression ===> additive-expression\n");}
							|	shift_expression PUNC_SHIFTLEFT additive_expression 							{printf("shift-expression ===> shift-expression << additive-expression\n");}
							|	shift_expression PUNC_SHIFTRIGHT additive_expression 							{printf("shift-expression ===> shift-expression >> additive-expression\n");}
							;


argument_expression_list_opt	:	argument_expression_list 													{printf("argument-expression-list-opt ===> argument-expression-list\n");}
								|	
								;

relational_expression			:	shift_expression 															{printf("relational-expression ===> shift-expression \n");}
								|	relational_expression PUNC_LESSTHAN shift_expression 						{printf("relational-expression ===> relational-expression < shift-expression\n");}
								|	relational_expression PUNC_GREATERTHAN shift_expression 					{printf("relational-expression ===> relational-expression > shift-expression\n");}
								|	relational_expression PUNC_LESSTHAN_EQUAL shift_expression 					{printf("relational-expression ===> relational-expression <= shift-expression\n");}
								|	relational_expression PUNC_GREATERTHAN_EQUAL shift_expression 				{printf("relational-expression ===> relational-expression >= shift-expression\n");}
								;

equality_expression				:	relational_expression 														{printf("equality-expression ===> relational-expression\n");}
								|	equality_expression PUNC_EQUALITY_OPERATOR relational_expression 			{printf("equality-expression ===> equality-expression == relational-expression\n");}
								|	equality_expression PUNC_NOT_EQUAL relational_expression 					{printf("equality-expression ===> equality-expression != relational-expression\n");}
								;

AND_expression					:	equality_expression 														{printf("AND-expression ===> equality_expression\n");}						
								|	AND_expression PUNC_BITWISE_AND equality_expression 						{printf("AND-expression ===> AND-expression & equality-expression");}
								;

exclusive_OR_expression			:	AND_expression 																{printf("exclusive-OR-expression ===> AND-expression\n");}
								|	exclusive_OR_expression PUNC_WEDGE AND_expression 							{printf("exclusive-OR-expression ===> exclusive-OR-expression ^ AND-expression\n");}
								;

inclusive_OR_expression			:	exclusive_OR_expression 													{printf("inclusive-OR-expression ===> exclusive-OR-expression\n");}
								|	inclusive_OR_expression PUNC_BITWISE_OR exclusive_OR_expression 			{printf("inclusive-OR-expression ===> inclusive-OR-expression | exclusive-OR-expression\n");}
								;

logical_AND_expression			:	inclusive_OR_expression 													{printf("logical-AND-expression ===> inclusive-OR-expression\n");}
								|	logical_AND_expression 	PUNC_LOGICAL_AND inclusive_OR_expression 			{printf("logical-AND-expression ===> logical-AND-expression && inclusive-OR-expression\n");}
								;

logical_OR_expression			:	logical_AND_expression 														{printf("logical-OR-expression ===> logical-AND-expression\n");}
								|	logical_OR_expression PUNC_LOGICAL_OR logical_AND_expression				{printf("logical-OR-expression ===> logical-OR-expression || logical-AND-expression\n");}
								;

conditional_expression			:	logical_OR_expression 																{printf("conditional-expression ===> logical_OR_expression\n");}
								|	logical_OR_expression PUNC_QUESTION_MARK expression PUNC_COLON conditional_expression	{printf("conditional-expression ===> logical_OR_expression ? expression : conditional-expression\n");}
								;

assignment_operator				:	PUNC_EQUAL 																	{printf("assignment-operator ===> = \n");}
								|	PUNC_MULTIPLY_EQUAL 														{printf("assignment-operator ===> *= \n");}
								|	PUNC_DIVIDE_EQUAL 															{printf("assignment-operator ===> /= \n");}
								|	PUNC_MODULO_EQUAL															{printf("assignment-operator ===> %%= \n");}
								|	PUNC_PLUS_EQUAL																{printf("assignment-operator ===> += \n");}
								|	PUNC_MINUS_EQUAL 															{printf("assignment-operator ===> -= \n");}
								|	PUNC_SHIFTLEFT_EQUAL 														{printf("assignment-operator ===> <<= \n");}
								|	PUNC_SHIFTRIGHT_EQUAL 														{printf("assignment-operator ===> >>= \n");}
								|	PUNC_BITWISE_AND_EQUAL 														{printf("assignment-operator ===> &= \n");}
								|	PUNC_WEDGE_EQUAL 															{printf("assignment-operator ===> ^= \n");}
								|	PUNC_BITWISE_OR_EQUAL														{printf("assignment-operator ===> |= \n");}
								;
expression 						:	assignment_expression 														{printf("expression ===> assignment-expression\n");}
								|	expression PUNC_COMMA assignment_expression 								{printf("expression ===> expression , assignment-expression\n");}
								;

constant_expression				:	conditional_expression
								;

assignment_expression			:	conditional_expression														{printf("assignment-expression ===> conditional-expression\n");}
								|	unary_expression assignment_operator assignment_expression 					{printf("assignment-expression ===> unary-expression assignment-operator assignment-expression\n");}
								;

init_declarator_list_opt 		: 	init_declarator_list 														{printf("init-declarator-list-opt ===> init-declarator-list\n");}
								|																				{printf("init-declarator-list-opt ===> EMPTY-STRING \n");}
								;																								

declaration						:	declaration_specifiers init_declarator_list_opt	PUNC_SEMICOLON				{printf("declaration ===> declaration-specifiers init-declarator-list-opt ; \n");}
								;

declaration_specifiers_opt 		:	declaration_specifiers 														{printf("declaration-specifiers-opt ===> declaration-specifiers\n");}
								|																				{printf("declaration-specifiers-opt ===> EMPTY-STRING\n");}
								;

declaration_specifiers			:	type_specifier declaration_specifiers_opt									{printf("declaration-specifiers ===> type-specifier declaration-specifiers-opt\n");}
								;

init_declarator_list 			:	init_declarator 															{printf("init-declarator-list ===> init-declarator-list\n");}
								|	init_declarator_list PUNC_COMMA init_declarator 							{printf("init-declarator-list ===> init-declarator-list , init-declarator\n");}
								;

init_declarator 				:	declarator 																	{printf("init-declarator ===> declarator \n");}
								|	declarator PUNC_EQUAL initializer 												{printf("declarator = initializer\n");}
								;

type_specifier					:	KEYWORD_VOID																{printf("type-specifier ===> void\n");}
								|	KEYWORD_CHAR																{printf("type-specifier ===> char\n");}
								|	KEYWORD_SHORT																{printf("type-specifier ===> short\n");}
								|	KEYWORD_INT																	{printf("type-specifier ===> int\n");}
								|	KEYWORD_LONG																{printf("type-specifier ===> long\n");}
								|	KEYWORD_FLOAT																{printf("type-specifier ===> float\n");}
								|	KEYWORD_DOUBLE																{printf("type-specifier ===> double\n");}
								|	KEYWORD_MATRIX																{printf("type-specifier ===> Matrix\n");}
								|	KEYWORD_SIGNED 																{printf("type-specifier ===> signed\n");}
								|	KEYWORD_UNSIGNED 															{printf("type-specifier ===> unsigned\n");}
								|	KEYWORD_BOOL 																{printf("type-specifier ===> Bool\n");}
								;

pointer_opt						:	pointer 																	{printf("pointer-opt ===> pointer\n");}
								|																				{printf("pointer-opt ===> EMPTY-STRING\n");}
								;								

declarator 						:	pointer_opt direct_declarator												{printf("declarator ===> pointer-opt direct_declarator\n");}
								;

assignment_expression_opt		:	assignment_expression 														{printf("assignment-expression-opt ===> assignment-expression\n");}
								| 																				{printf("assignment-expression-opt ===> EMPTY-STRING\n");}
								;

identifier_list_opt				:	identifier_list 															{printf("identifier-list-opt ===> identifier-list \n");}
								| 																				{printf("identifier-list-opt ===> EMPTY-STRING\n");}
								;								

direct_declarator				:	IDENTIFIER 																							{printf("direct-declarator ===>identifier \n");}
								|	PUNC_LEFT_SMALL_BRACKET declarator PUNC_RIGHT_SMALL_BRACKET											{printf("direct-declarator ===> ( declarator) \n");}
								|	direct_declarator PUNC_LEFT_SQUARE_BRACKET assignment_expression_opt PUNC_RIGHT_SQUARE_BRACKET		{printf("direct-declarator ===> direct-declarator [assignment-expression-opt]\n");}
								|	direct_declarator PUNC_LEFT_SMALL_BRACKET parameter_type_list PUNC_RIGHT_SMALL_BRACKET				{printf("direct-declarator ===> direct-declarator (parameter-type-list)\n");}
								|	direct_declarator PUNC_LEFT_SMALL_BRACKET identifier_list_opt PUNC_RIGHT_SMALL_BRACKET 				{printf("direct-declarator ===> direct-declarator (identifier-list-opt)\n");}
								;


pointer 						:	PUNC_MULTIPLY pointer_opt 													{printf("pointer ===> * pointer-opt\n");}
								;

parameter_type_list				:	parameter_list 																{printf("parameter-type-list ===> parameter-list\n");}
								;

parameter_list 					:	parameter_declaration 														{printf("parameter-list ===> parameter-declaration\n");}
								|	parameter_list PUNC_COMMA parameter_declaration 							{printf("parameter-list ===> parameter-list , parameter-declaration\n");}
								;

parameter_declaration			:	declaration_specifiers declarator 											{printf("parameter-declaration ===> declaration-specifiers declarator\n");}
								|	declaration_specifiers 														{printf("parameter-declaration ===> declaration-specifiers\n");}
								;

identifier_list 				:	IDENTIFIER 																	{printf("identifier-list ===> identifier\n");}
								|	identifier_list PUNC_COMMA IDENTIFIER 										{printf("identifier-list ===> identifier-list , identifier\n");}
								;

initializer						:	assignment_expression 														{printf("initializer ===> assignment-expression\n");}
								|	PUNC_LEFT_CURLY_BRACKET initializer_row_list PUNC_RIGHT_CURLY_BRACKET		{printf("initializer ===> {initializer-row-list}\n");}										
								;

initializer_row_list			:	initializer_row 															{printf("initializer-row-list ===> initializer-row\n");}
								|	initializer_row_list PUNC_SEMICOLON initializer_row 						{printf("initializer-row-list ===> initializer-row-list ; initialize-row\n");}
								;

designation_opt					:	designation 																{printf("designation-opt ===> designation\n");}
								|	 																			{printf("designation-opt ===> EMPTY-STRING\n");}
								;

initializer_row 				:	designation_opt initializer 												{printf("initializer-row ===> designation-opt initializer\n");}
								|	initializer_row PUNC_COMMA designation_opt initializer 						{printf("initializer-row ===> initializer-row , designation-opt initializer\n");}
								;

designation 					:	designation_list PUNC_EQUAL 														{printf("designation ===> designation = \n");}
								;

designation_list				:	designator 																	{printf("designation_list ===> designator-list designator\n");}
								|	designation_list designator
								;

designator						:	PUNC_LEFT_SQUARE_BRACKET constant_expression PUNC_RIGHT_SQUARE_BRACKET 		{printf("designator ===> [ constant-expression ]\n");}
								|	PUNC_DOT IDENTIFIER 														{printf("designator ===> . identifier \n");}
								;


statement						:	labeled_statement 															{printf("statement ===> labeled-statement\n");}
								|	compound_statement 															{printf("statement ===> compound-statement\n");}
								|	expression_statement 														{printf("statement ===> expression-statement\n");}
								|	selection_statement 														{printf("statement ===> selection-statement\n");}
								|	iteration_statement 														{printf("statement ===> iteration-statement\n");}
								|	jump_statement 																{printf("statement ===> jump-statement\n");}
								;

labeled_statement				:	IDENTIFIER PUNC_COLON statement 											{printf("labeled-statement ===> identifier : statement\n");}
								|	KEYWORD_CASE constant_expression PUNC_COLON statement 						{printf("labeled-statement ===> case constant-expression | statement\n");}
								|	KEYWORD_DEFAULT PUNC_COLON statement 										{printf("labeled-statement ===> default : statement \n");}
								;

block_item_list_opt 			: 	block_item_list 															{printf("block-item-list-opt ===> block-item-list\n");}
								| 																				{printf("block-item-list-opt ===> EMPTY-STRING\n");}
								;

compound_statement				:	PUNC_LEFT_CURLY_BRACKET block_item_list_opt PUNC_RIGHT_CURLY_BRACKET 		{printf("compound-statement ===> { block-item-list-opt }\n");}
								;

block_item_list 				:	block_item  																{printf("block-item-list ===> block-item\n");}
								|	block_item_list block_item 													{printf("block-item-list ===> block-item-list block-item-list\n");}
								;

block_item 						:	declaration 																{printf("block-item ===> declaration\n");}
								|	statement 																	{printf("block-item ===> statement\n");}
								;


expression_opt 					: 	expression 																	{printf("expression-opt ===> expression-opt\n");}
								| 																				{printf("expression-opt ===> EMPTY-STRING\n");}
								; 									

expression_statement			:	expression_opt PUNC_SEMICOLON 															{printf("expression-statement ===> expression-opt;\n");}
								;

selection_statement				:	KEYWORD_IF PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET statement 							{printf("selection-statement ===> if ( expression ) statement\n");}
								|	KEYWORD_IF PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET statement KEYWORD_ELSE statement 	{printf("selection-statement ===> if ( expression ) statement else statement\n");}
								|	KEYWORD_SWITCH PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET statement 						{printf("selection-statement ===> switch ( expression ) statement\n");}
								;

iteration_statement				:	KEYWORD_WHILE PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET statement 																	{printf("iteration-statement ===> while ( expression ) statement \n");}
								|	KEYWORD_DO statement KEYWORD_WHILE PUNC_LEFT_SMALL_BRACKET expression PUNC_RIGHT_SMALL_BRACKET PUNC_SEMICOLON											{printf("iteration-statement ===> do statement while ( expression ) ; \n");}
								|	KEYWORD_FOR PUNC_LEFT_SMALL_BRACKET expression_opt PUNC_SEMICOLON expression_opt PUNC_SEMICOLON expression_opt PUNC_RIGHT_SMALL_BRACKET statement 		{printf("iteration-statement ===> for ( expression-opt ; expression-opt ; expression-opt ) statement\n");}
								|	KEYWORD_FOR PUNC_LEFT_SMALL_BRACKET declaration expression_opt PUNC_SEMICOLON expression_opt PUNC_RIGHT_SMALL_BRACKET statement 							{printf("iteration-statement ===> for( declaration expression-opt ; expression-opt ) statement \n");}
								;

jump_statement					:	KEYWORD_GOTO IDENTIFIER PUNC_SEMICOLON						{printf("jump-statement ===> goto identifier ; \n");}
								|	KEYWORD_CONTINUE PUNC_SEMICOLON								{printf("jump-statement ===> continue ; \n");}
								|	KEYWORD_BREAK PUNC_SEMICOLON								{printf("jump-statement ===> break ; \n");}
								|	KEYWORD_RETURN expression_opt PUNC_SEMICOLON				{printf("jump-statement ===> return expression-opt ; \n");}
								;




translation_unit				:	external_declaration						{ printf ("translation-unit ===> external-declaration\n"); }
								| 	translation_unit external_declaration		{ printf ("translation-unit ===> translation-unit external-declaration\n"); }
								;

external_declaration			: 	function_definition							{ printf ("external-declaration ===> function-declaration\n"); }
								| 	declaration									{ printf ("external-declaration ===> declaration\n"); }
								;

function_definition				: 	declaration_specifiers declarator declaration_list_opt compound_statement	{ printf ("function-declaration ===> declaration-specifiers declarator declaration-list-opt compound-statement\n"); }
								;

declaration_list_opt			:	declaration_list							{ printf ("declaration-list-opt ===> declaration-list\n"); }
								| 												{ printf ("declaration-list-opt ===> EMPTY_STRING\n"); }
								;

declaration_list				: 	declaration 								{ printf ("declaration-list ===> declaration\n"); }
								|	declaration_list declaration 				{ printf ("declaration-list ===> declaration-list declaration\n"); }
								;

%%

int yyerror (char *s){
	printf("Parser Error: %s\n", s);
}
