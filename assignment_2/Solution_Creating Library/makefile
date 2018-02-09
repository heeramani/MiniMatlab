a.out: driverFile.o libprintarg.a
	c++ driverFile.o -L. -lprintarg

driverFile.o: driverFile.cpp myl.h
	c++ -Wall -c driverFile.cpp

libprintarg.a : assignment2_15CS30015.o
	ar -rcs libprintarg.a assignment2_15CS30015.o

assignment2_15CS30015.o : assignment2_15CS30015.cpp myl.h
	c++ -Wall -c assignment2_15CS30015.cpp

clean:
	rm a.out driverFile.o libprintarg.a assignment2_15CS30015.o
