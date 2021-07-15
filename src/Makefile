CC = g++
OBJECT_FILES = main.o calculator.o
BINARY_NAME = app
BINARY_DIRECTORY = ../bin

all: help

help:
	@echo "Usage: make <command>"
	@echo ""
	@echo "List of available commands:"
	@echo "    help               Displaying this help message"
	@echo "    install            Compile all source code files"
	@echo "    clean              Clean the built object files"
	@echo "    uninstall          Uninstall this software"

install: ${OBJECT_FILES}
	mkdir -p ${BINARY_DIRECTORY}
	${CC} calculator.o main.o -o ${BINARY_DIRECTORY}/${BINARY_NAME}

main.o: main.cpp
	${CC} -c main.cpp -o main.o

calculator.o: ../header/calculator.h calculator.cpp
	${CC} -c calculator.cpp -o calculator.o

clean:
	rm -f *.o

uninstall:
	rm -f ${BINARY_DIRECTORY}/${BINARY_NAME}
