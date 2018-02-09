a.out: y.tab.o lex.yy.o ass4_15CS30015_translator.o 
	g++ -g ass4_15CS30015_translator.o lex.yy.o y.tab.o -lfl
	#make run to generate the output
	#make rm_output to clear all the system generated files and output file
	#make clean to clear all the system generated files only
lex.yy.c: ass4_15CS30015.l
	flex ass4_15CS30015.l
y.tab.c: ass4_15CS30015.y
	yacc -dtv ass4_15CS30015.y
ass4_15CS30015_translator.o: ass4_15CS30015_translator.cxx
	g++ -g -c ass4_15CS30015_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
clean:
	rm ass4_15CS30015_quad1.out ass4_15CS30015_quad2.out ass4_15CS30015_quad3.out ass4_15CS30015_quad4.out ass4_15CS30015_quad5.out lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass4_15CS30015_translator.o a.out  
rm_output:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass4_15CS30015_translator.o a.out 
run: 
	./a.out < ass4_15CS30015_test1.c > ass4_15CS30015_quad1.out
	./a.out < ass4_15CS30015_test2.c > ass4_15CS30015_quad2.out
	./a.out < ass4_15CS30015_test3.c > ass4_15CS30015_quad3.out
	./a.out < ass4_15CS30015_test4.c > ass4_15CS30015_quad4.out
	./a.out < ass4_15CS30015_test5.c > ass4_15CS30015_quad5.out

