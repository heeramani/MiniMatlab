a.out:	15CS30015_lexer.c 15CS30015.h lex.yy.c
		gcc 15CS30015_lexer.c lex.yy.c -lfl -o a.out

lex.yy.c:	15CS30015.l 15CS30015.h
		flex 15CS30015.l

clean:		
		rm a.out lex.yy.c

