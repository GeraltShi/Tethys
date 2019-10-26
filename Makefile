# Usage:
# make
# make clean # remove all binaries and objects

CC = g++

all: generate

generate: main.cpp
	@echo "Creating object.."
	${CC} main.cpp -o main.out

clean:
	@echo "Cleaning up.."
	rm *.out
