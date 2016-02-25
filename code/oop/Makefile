all: main 

Circle.o: Circle.cpp
	g++ Circle.cpp -c

Person.o: Person.cpp
	g++ Person.cpp -c

# Main uses both Person and Circle
main: main.cpp Circle.o
	g++ main.cpp Circle.o -o main

find-person: find-person.cpp Person.o
	g++ find-person.cpp Person.o -o find-person

clean:
	$(RM) Person.o Circle.o main find-person
