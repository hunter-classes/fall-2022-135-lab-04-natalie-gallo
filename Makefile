main: main.o
	g++ main main.o

main.o: main.cpp
	g++ -c main.cpp

