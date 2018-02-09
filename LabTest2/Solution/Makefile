a.out: y.tab.o lex.yy.o 15CS30015_translator.o 
	g++ -g 15CS30015_translator.o lex.yy.o y.tab.o -lfl
	#make run to generate the output
	#make rm_output to clear all the system generated files and output file
	#make clean to clear all the system generated files only
lex.yy.c: 15CS30015.l
	flex 15CS30015.l
y.tab.c: 15CS30015.y
	yacc -dtv 15CS30015.y
15CS30015_translator.o: 15CS30015_translator.cxx
	g++ -g -c 15CS30015_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
clean:
	rm 15CS30015_quad1.out 15CS30015_quad2.out lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o 15CS30015_translator.o a.out  
rm_output:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o 15CS30015_translator.o a.out 
run: 
	./a.out < lab_test_1.mm > 15CS30015_quad1.out
	./a.out < lab_test_2.mm > 15CS30015_quad2.out

