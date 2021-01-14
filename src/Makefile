CC = g++

all: install

install: calculator main
	${CC} calculator.o main.o -o ../calculator

main: main.cpp
	${CC} -c main.cpp -o main.o

calculator: ../header/calculator.h calculator.cpp
	${CC} -c calculator.cpp -o calculator.o

clean:
	rm -f *.o

uninstall:
	rm -f ../calculator
