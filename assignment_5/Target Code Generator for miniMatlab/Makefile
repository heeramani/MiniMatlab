tinyc: y.tab.o lex.yy.o ass5_15CS30015_translator.o ass5_15CS30015_target_translator.o 
	g++ -g ass5_15CS30015_translator.o ass5_15CS30015_target_translator.o lex.yy.o y.tab.o -lfl -o tinyc
	 ./tinyc < ass5_15CS30015_test1.c
	 ./tinyc < ass5_15CS30015_test2.c 
	 ./tinyc < ass5_15CS30015_test3.c
	 ./tinyc < ass5_15CS30015_test4.c
	 ./tinyc < ass5_15CS30015_test5.c
	# Above are the individual commands to generate the .s file to output.s then run make output to compile the library then do ./output to run
	
	# make run to execute all the test files at once
lex.yy.c: ass5_15CS30015.l
	flex ass5_15CS30015.l
y.tab.c: ass5_15CS30015.y
	yacc -dtv ass5_15CS30015.y
ass5_15CS30015_target_translator.o: ass5_15CS30015_target_translator.cxx
	g++ -g -c ass5_15CS30015_target_translator.cxx
ass5_15CS30015_translator.o: ass5_15CS30015_translator.cxx
	g++ -g -c ass5_15CS30015_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -DYYDEBUG -c y.tab.c
libass2_14CS10003.a: ass2_14CS10003.o
	ar -rcs libass2_14CS10003.a ass2_14CS10003.o

ass2_14CS10003.o: ass2_14CS10003.c myl.h
	gcc -Wall  -c ass2_14CS10003.c
clean:
	rm test1 test2 test3 test4 test5 lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass5_15CS30015_translator.o ass5_15CS30015_target_translator.o ass5_15CS30015_test1.o ass5_15CS30015_test2.o ass5_15CS30015_test3.o ass5_15CS30015_test4.o ass5_15CS30015_test5.o libass2_14CS10003.a ass2_14CS10003.o output.o ass5_15CS30015_quad1.out ass5_15CS30015_quad2.out ass5_15CS30015_quad3.out ass5_15CS30015_quad4.out ass5_15CS30015_quad5.out


test1: ass5_15CS30015_test1.o libass2_14CS10003.a
	gcc -g ass5_15CS30015_test1.o -o test1 -L. -lass2_14CS10003
ass5_15CS30015_test1.o: ass5_15CS30015_test1.s myl.h
	gcc -g -Wall  -c ass5_15CS30015_test1.s -o ass5_15CS30015_test1.o

test2: ass5_15CS30015_test2.o libass2_14CS10003.a
	gcc -g  ass5_15CS30015_test2.o -o test2 -L. -lass2_14CS10003
ass5_15CS30015_test2.o: ass5_15CS30015_test2.s myl.h
	gcc -g -Wall -c ass5_15CS30015_test2.s

test3: ass5_15CS30015_test3.o libass2_14CS10003.a
	gcc -g  ass5_15CS30015_test3.o -o test3 -L. -lass2_14CS10003
ass5_15CS30015_test3.o: ass5_15CS30015_test3.s myl.h
	gcc -g -Wall  -c ass5_15CS30015_test3.s

test4: ass5_15CS30015_test4.o libass2_14CS10003.a
	gcc -g  ass5_15CS30015_test4.o -o test4 -L. -lass2_14CS10003
ass5_15CS30015_test4.o: ass5_15CS30015_test4.s myl.h
	gcc -g -Wall  -c ass5_15CS30015_test4.s

test5: ass5_15CS30015_test5.o libass2_14CS10003.a
	gcc -g  ass5_15CS30015_test5.o -o test5 -L. -lass2_14CS10003
ass5_15CS30015_test5.o: ass5_15CS30015_test5.s myl.h
	gcc -g -Wall -c ass5_15CS30015_test5.s

pointerhandling:pointerhandling.o libass2_14CS10003.a
	gcc -g  pointerhandling.o -o pointerhandling -L. -lass2_14CS10003
pointerhandling.o: pointerhandling.s myl.h
	gcc -g -Wall -c pointerhandling.s

#output: output.o
output: output.o libass2_14CS10003.a
	gcc -g  output.o -o output -L. -lass2_14CS10003
output.o: output.s myl.h
	gcc -g -Wall -c output.s

run: 
		
	./tinyc < ass5_15CS30015_test1.c > ass5_15CS30015_quad1.out
  	
	mv output.s ass5_15CS30015_test1.s
	
	make test1
	
	./tinyc < ass5_15CS30015_test2.c > ass5_15CS30015_quad2.out

	mv output.s ass5_15CS30015_test2.s
	
	make test2

	./tinyc < ass5_15CS30015_test3.c > ass5_15CS30015_quad3.out

	mv output.s ass5_15CS30015_test3.s

	make test3

	./tinyc < ass5_15CS30015_test4.c > ass5_15CS30015_quad4.out
	
	mv output.s ass5_15CS30015_test4.s

	make test4

	./tinyc < ass5_15CS30015_test5.c > ass5_15CS30015_quad5.out
	
	mv output.s ass5_15CS30015_test5.s

	make test5
	
	./tinyc < pointerhandling.c > pointerhandling.out
	
	mv output.s pointerhandling.s

	make pointerhandling
	#Below are the individual commands for compiling each test file
	#./test1
	#./test2
	#./test3
	#./test4
	#./test5
	#./pointerhandling

