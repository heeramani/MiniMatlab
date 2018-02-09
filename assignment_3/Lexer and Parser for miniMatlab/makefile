
myparser:	ass3_15CS30015_parser.c ass3_15CS30015.tab.c lex.yy.c myscanner
		gcc ass3_15CS30015_parser.c -o myparser

myscanner:	ass3_15CS30015_lexer.c lex.yy.c
		gcc ass3_15CS30015_lexer.c  -o myscanner

lex.yy.c:	ass3_15CS30015.l ass3_15CS30015.tab.c
		flex ass3_15CS30015.l

ass3_15CS30015.tab.c:	ass3_15CS30015.y
		bison ass3_15CS30015.y

clean:		
		rm myparser myscanner lex.yy.c ass3_15CS30015.tab.c

