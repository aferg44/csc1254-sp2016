all: main

main: problem5b.cpp problem5.o
	g++ problem5b.cpp problem5.o -o main

problem5.o: problem5.cpp
	g++ problem5.cpp -c

clean:
	$(RM) problem5.o main
