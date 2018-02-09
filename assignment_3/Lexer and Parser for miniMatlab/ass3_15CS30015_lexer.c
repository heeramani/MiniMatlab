#include <stdio.h>
// #include "ass3_15CS30015.tab.c"
#include "lex.yy.c"

extern int yylex ();
extern int yylineno;
extern char* yytext;
extern void yyrestart(FILE* f);

int main (int argc, char** argv) {

	int token;
	FILE* f;
	
	if (argc > 1) {
		f = fopen (argv[1], "r");
		if (!f) {
			perror (argv[1]);
			return (1);
		}
	}
	
	
	if (f) {
		yyrestart(f);
	}
	

	while (token = yylex ()) {
		switch (token) {
			case KEYWORD_UNSIGNED: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_BREAK: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_RETURN: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_VOID: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_CASE: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_FLOAT: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_SHORT: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_CHAR: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_FOR: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_SIGNED: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_WHILE: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_GOTO: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_BOOL: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_CONTINUE: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_IF: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_DEFAULT: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_DO: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_INT: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_SWITCH: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_DOUBLE: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_LONG: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_ELSE: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case KEYWORD_MATRIX: {
				printf("<KEYWORD, %d, %s>\n", token, yytext);
				break;
			}
			case IDENTIFIER: {
				printf("<IDENTIFIER, %d, %s>\n", token, yytext);
				break;
			}
			case CONSTANT_ZERO: {
				printf("<CONSTANT, %d, %s>\n", token, yytext);
				break;
			}
			
			case CONSTANT_FLOATING: {
				printf("<FLOATING CONSTANT, %d, %s>\n", token, yytext);
				break;
			}
			case CONSTANT_CHARACTER: {
				printf("<CHARACTER CONSTANT, %d, %s>\n", token, yytext);
				break;
			}
			case CONSTANT_INTEGER: {
				printf("<ZERO CONSTANT, %d, %s>\n", token, yytext);
				break;
			}
			
			case STRING_LITERAL: {
				printf("<STRING LITERAL, %d, %s>\n", token, yytext);
				break;
			}


			case PUNC_LEFT_SQUARE_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_RIGHT_SQUARE_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LEFT_SMALL_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_RIGHT_SMALL_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LEFT_CURLY_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_RIGHT_CURLY_BRACKET: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_DOT: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_RIGHT_ARROW: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_INCREMENT: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_DECREMENT: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_BITWISE_AND: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MULTIPLY: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_PLUS: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MINUS: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			
			case PUNC_BACKSLASH: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MODULO: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_SHIFTLEFT: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_SHIFTRIGHT: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LESSTHAN: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_GREATERTHAN: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LESSTHAN_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_GREATERTHAN_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_EQUALITY_OPERATOR: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_NOT_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_WEDGE: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_BITWISE_OR: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LOGICAL_AND: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_LOGICAL_OR: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_QUESTION_MARK: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_COLON: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_SEMICOLON: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MULTIPLY_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_DIVIDE_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MODULO_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_PLUS_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_MINUS_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_SHIFTLEFT_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_SHIFTRIGHT_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_BITWISE_AND_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_WEDGE_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_BITWISE_OR_EQUAL: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_COMMA: {
				printf("<PUNCTUATOR, %d, %s>\n", token, yytext);
				break;
			}
			case PUNC_DOT_SINGLE_QUATATION:	{
				printf("<PUNCTUATOR, %d, %s>\n",token, yytext);
				break;
			}
			default : {
				printf("Error: Unidentified token : %s", yytext);
			}
		}
	}
	
	if (f) {
		fclose (f);
	}

	return 0;
}

