#include <stdio.h>
#include "15CS30015.h"

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
			
			case KEYWORD_BREAK: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_RETURN: {
				printf("<KEYWORD>\n");
				break;
			}
			
			case KEYWORD_FLOAT: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_CASE: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_FOR: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_WHILE: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_CONTINUE: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_IF: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_DEFAULT: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_INT: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_SWITCH: {
				printf("<KEYWORD>\n");
				break;
			}
			case KEYWORD_MATRIX_KEY: {
				printf("<KEYWORD>\n");
				break;
			}
			case IDENTIFIER: {
				printf("<IDENTIFIER>\n");
				break;
			}
			case INTEGER_CONSTANT: {
				printf("<INTEGER_CONSTANT>\n");
				break;
			}
			case FLOATING_CONSTANT: {
				printf("<FLOATING CONSTANT>\n");
				break;
			}
			case ZERO_CONSTANT: {
				printf("<ZERO CONSTANT>\n");
				break;
			}
			case STRING_LITERAL: {
				printf("<STRING LITERAL>\n");
				break;
			}
			case LEFT_SQUARE_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case RIGHT_SQUARE_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case LEFT_SMALL_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case RIGHT_SMALL_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case LEFT_CURL_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case RIGHT_CURL_BRAC_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case DOT_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case INCREMENT_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case DECREMENT_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case MULT_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case PLUS_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case MINUS_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			
			case DIVIDE_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case NOT_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case LESS_THAN_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case GREATER_THAN_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case AND_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case OR_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case QUESTION_MARK_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case COLON_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case SEMICOLON_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case EQUAL_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case COMMA_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case HASTAG_PUNC: {
				printf("<PUNCTUATOR>\n");
				break;
			}
			case SINGLELINE_COMMENT: {
				printf ("<SINGLE LINE COMMENT>\n");
				break;
			}
			case FOR_LOOP_1:	{printf("<FOR_LOOP_1>\n");break;}
			case FOR_LOOP_2:	{printf("<FOR_LOOP_2>\n");break;}
			case WHILE_LOOP:	{printf("<WHILE_LOOP>\n");break;}
			case DECLARATION:	{printf("<DECLARATION>\n");break;}
			case ARRAY_ACCESS:	{printf("<ARRAY_ACCESS>\n");break;}
			case IF_CONDITION:	{printf("<IF_CONDITION>\n");break;}
			case UNARY_OP:		{printf("<UNARY_OP>\n");break;}
			case SWITCH_NEW:		{printf("<SWITCH>\n");break;}
			case MATRIX:		{printf("<MATRIX>\n");break;}
			case BINARY_OP:		{printf("<BINARY_OP>\n");break;}
			
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

