all: Vector.o ex10.o
	g++ -Wall -g -std=c++17 -o ex10 ex10.o Vector.o

ex10.o: ex10.cc Vector.h
	g++ -Wall -g -std=c++17 -c ex10.cc

Vector.o: Vector.cc Vector.h
	g++ -Wall -g -std=c++17 -c Vector.cc

clean:
	rm ex10 ex10.o Vector.o *~