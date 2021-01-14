CC = g++

all: help

help:
	@echo "Usage: make <command>"
	@echo ""
	@echo "List of available commands:"
	@echo "    help		    Displaying this help message"
	@echo "    install	    Compile all source code files"
	@echo "    uninstall	    Uninstall this software"

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
