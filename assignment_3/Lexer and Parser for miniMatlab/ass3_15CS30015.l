%{
#include "ass3_15CS30015.tab.c"
				
%}
%x comment

UNSIGNED				"unsigned"
BREAK 					"break"
RETURN 					"return"
VOID					"void"
CASE					"case"
FLOAT					"float"
SHORT					"short"
CHAR					"char"
FOR						"for"
SIGNED					"signed"
WHILE					"while"
GOTO					"goto"
BOOL					"Bool"
CONTINUE				"continue"
IF						"if"
DEFAULT					"default"
DO						"do"
INT 					"int"
SWITCH					"switch"
DOUBLE					"double"
LONG					"long"
ELSE					"else"
MATRIX					"Matrix"
	
IDENTIFIER				[_a-zA-Z][_a-zA-Z0-9]*
DIGIT					[0-9]
ZERO_CONSTANT			"0"
NONZERO_DIGIT			[1-9]
INTEGER_CONSTANT		({NONZERO_DIGIT})({DIGIT}*)
DIGIT_SEQUENCE			[0-9]+
SIGN					[+-]
EXPONENT_PART			[Ee]({SIGN})?{DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT		(({DIGIT_SEQUENCE})?\.{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}\.)
FLOATING_CONSTANT		({FRACTIONAL_CONSTANT}({EXPONENT_PART})?)|({DIGIT_SEQUENCE}{EXPONENT_PART})
ESCAPE_SEQUENCE			("\\n")|("\\a")|("\\b")|("\\f")|("\\r")|("\\t")|("\\v")|("\\?")|("\\'")|("\\\"")|("\\\\")
C_CHAR					([^("\\")("\n")("\'")])|{ESCAPE_SEQUENCE}

C_CHAR_SEQUENCE			{C_CHAR}+
CHARACTER_CONSTANT		"\'"{C_CHAR_SEQUENCE}"\'"
STRING_LITERAL 			"\""{C_CHAR_SEQUENCE}?"\""
LEFT_SQUARE_BRACKET		"["
RIGHT_SQUARE_BRACKET	"]"
LEFT_SMALL_BRACKET		"("
RIGHT_SMALL_BRACKET		")"
LEFT_CURLY_BRACKET		"{"
RIGHT_CURLY_BRACKET		"}"
DOT						"."
RIGHT_ARROW				"->"
INCREMENT				"++"
DECREMENT				"--"
BITWISE_AND				"&"
MULTIPLY				"*"
PLUS					"+"
MINUS					"-"
TELDA					"~"
LOGICAL_NEGATION_OPERATOR	"!"
BACKSLASH				"/"
MODULO					"%"
SHIFTLEFT				"<<"
SHIFTRIGHT				">>"
LESSTHAN				"<"
GREATERTHAN				">"
LESSTHAN_EQUAL			"<="
GREATERTHAN_EQUAL		">="
EQUALITY_OPERATOR		"=="
NOT_EQUAL				"!="
WEDGE					"^"
BITWISE_OR				"|"
LOGICAL_AND				"&&"
LOGICAL_OR				"||"
QUESTION_MARK			"?"
COLON					":"
SEMICOLON				";"
EQUAL					"="
MULTIPLY_EQUAL			"*="
DIVIDE_EQUAL			"/="
MODULO_EQUAL			"%="
PLUS_EQUAL				"+="
MINUS_EQUAL				"-="
SHIFT_LEFT_EQUAL		"<<="
SHIFT_RIGHT_EQUAL		">>="
BITWISE_AND_EQUAL		"&="
WEDGE_EQUAL				"^="
BITWISE_OR_EQUAL		"|="
COMMA					","
HASH					"#"
DOT_SINGLE_QUATATION	".'"
SINGLE_LINE_COMMENT		"//"[^\r\n]*[\r\n]
WHITESPACE 				[ \t\n]

%%
{UNSIGNED}					{return KEYWORD_UNSIGNED;}
{BREAK}						{return KEYWORD_BREAK;}
{RETURN}					{return KEYWORD_RETURN;}
{VOID}						{return KEYWORD_VOID;}
{CASE}						{return KEYWORD_CASE;}
{FLOAT}						{return KEYWORD_FLOAT;}
{SHORT}						{return KEYWORD_SHORT;}
{CHAR}						{return KEYWORD_CHAR;}
{FOR}						{return KEYWORD_FOR;}
{SIGNED}					{return KEYWORD_SIGNED;}
{WHILE}						{return KEYWORD_WHILE;}
{GOTO}						{return KEYWORD_GOTO;}
{BOOL}						{return KEYWORD_BOOL;}
{CONTINUE}					{return KEYWORD_CONTINUE;}
{IF}						{return KEYWORD_IF;}
{DEFAULT}					{return KEYWORD_DEFAULT;}
{DO}						{return KEYWORD_DO;}
{INT}						{return KEYWORD_INT;}
{SWITCH}					{return KEYWORD_SWITCH;}
{DOUBLE}					{return KEYWORD_DOUBLE;}
{LONG}						{return KEYWORD_LONG;}
{ELSE}						{return KEYWORD_ELSE;}
{MATRIX}					{return KEYWORD_MATRIX;}

{IDENTIFIER}				{return IDENTIFIER;}


{FLOATING_CONSTANT}			{return CONSTANT_FLOATING;}
{CHARACTER_CONSTANT}		{return CONSTANT_CHARACTER;}
{INTEGER_CONSTANT}			{return CONSTANT_INTEGER;}

{ZERO_CONSTANT}				{return CONSTANT_ZERO;}

{STRING_LITERAL}			{return STRING_LITERAL;}

{LEFT_SQUARE_BRACKET}		{return PUNC_LEFT_SQUARE_BRACKET;}
{RIGHT_SQUARE_BRACKET}		{return PUNC_RIGHT_SQUARE_BRACKET;}
{LEFT_SMALL_BRACKET}		{return PUNC_LEFT_SMALL_BRACKET;}
{RIGHT_SMALL_BRACKET}		{return PUNC_RIGHT_SMALL_BRACKET;}
{LEFT_CURLY_BRACKET}		{return PUNC_LEFT_CURLY_BRACKET;}
{RIGHT_CURLY_BRACKET}		{return PUNC_RIGHT_CURLY_BRACKET;}
{DOT}						{return PUNC_DOT;}
{RIGHT_ARROW}				{return PUNC_RIGHT_ARROW;}
{INCREMENT}					{return PUNC_INCREMENT;}
{DECREMENT}					{return PUNC_DECREMENT;}
{BITWISE_AND}				{return PUNC_BITWISE_AND;}
{MULTIPLY}					{return PUNC_MULTIPLY;}
{PLUS}						{return PUNC_PLUS;}
{MINUS}						{return PUNC_MINUS;}
{TELDA}						/*{printf("PUNC_TELDA ^ ");}*/
{LOGICAL_NEGATION_OPERATOR}	/*{printf("PUNC_LOGICAL_NEGATION_OPERATOR !");}*/
{BACKSLASH}					{return PUNC_BACKSLASH;}
{MODULO}					{return PUNC_MODULO;}
{SHIFTLEFT}					{return PUNC_SHIFTLEFT;}
{SHIFTRIGHT}				{return PUNC_SHIFTRIGHT;}
{LESSTHAN}					{return PUNC_LESSTHAN;}
{GREATERTHAN}				{return PUNC_GREATERTHAN;}
{LESSTHAN_EQUAL}			{return PUNC_LESSTHAN_EQUAL;}
{GREATERTHAN_EQUAL}			{return PUNC_GREATERTHAN_EQUAL;}
{EQUALITY_OPERATOR}			{return PUNC_EQUALITY_OPERATOR;}
{NOT_EQUAL}					{return PUNC_NOT_EQUAL;}
{WEDGE}						{return PUNC_WEDGE;}
{BITWISE_OR}				{return PUNC_BITWISE_OR;}
{LOGICAL_AND}				{return PUNC_LOGICAL_AND;}
{LOGICAL_OR}				{return PUNC_LOGICAL_OR;}
{QUESTION_MARK}				{return PUNC_QUESTION_MARK;}
{COLON}						{return PUNC_COLON;}
{SEMICOLON}					{return PUNC_SEMICOLON;}
{EQUAL}						{return PUNC_EQUAL;}
{MULTIPLY_EQUAL}			{return PUNC_MULTIPLY_EQUAL;}
{DIVIDE_EQUAL}				{return PUNC_DIVIDE_EQUAL;}
{MODULO_EQUAL}				{return PUNC_MODULO_EQUAL;}
{PLUS_EQUAL}				{return PUNC_PLUS_EQUAL;}
{MINUS_EQUAL}				{return PUNC_MINUS_EQUAL;}
{SHIFT_LEFT_EQUAL}			{return PUNC_SHIFTLEFT_EQUAL;}
{SHIFT_RIGHT_EQUAL}			{return PUNC_SHIFTRIGHT_EQUAL;}
{BITWISE_AND_EQUAL}			{return PUNC_BITWISE_AND_EQUAL;}
{WEDGE_EQUAL}				{return PUNC_WEDGE_EQUAL;}
{BITWISE_OR_EQUAL}			{return PUNC_BITWISE_OR_EQUAL;}
{COMMA}						{return PUNC_COMMA;}
{HASH}						/*{printf("PUNC_HASH #");}*/

{DOT_SINGLE_QUATATION}		{return PUNC_DOT_SINGLE_QUATATION;}

{SINGLE_LINE_COMMENT}		/*{printf("comment\n"); }*/

{WHITESPACE}				{ /* Ignore whitespace */ }

"/*"					BEGIN(comment);
<comment>[^*\n]*			/* comment */
<comment>"*"+[^*/\n]*			/* comment */
<comment>\n				/* comment */
<comment>"*"+"/"			BEGIN(INITIAL); { printf ("<MULTILINE_COMMENT>\n"); }
			
%%
int yywrap (void) {
	return 1;
}




