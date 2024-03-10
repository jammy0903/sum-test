#Make file
all: add-test

add-test: main.o add.o
	g++ -o add-test main.o add.o

main.o: add.h main.cpp
	g++ -c -o main.o main.cpp

add.o: add.h add.cpp
	g++ -c -o add.o add.cpp

clean:
	rm -f add-test
	rm -f *.o