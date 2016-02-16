all: demo

demo: demo.cpp dice.o cards.o imag.o
	g++ demo.cpp dice.o cards.o imag.o -o demo

dice.o: dice.cpp
	g++ dice.cpp -c

cards.o: cards.cpp
	g++ cards.cpp -c

imag.o: imag.cpp
	g++ imag.cpp -c

clean:
	$(RM) dice.o cards.o demo
