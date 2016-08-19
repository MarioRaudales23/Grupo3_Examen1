main: main.o pokemon.o
		g++ main.o pokemon.o -o tem

main.o: main.cpp pokemon.h
		g++ -c main.cpp

pokemon.o: pokemon.h pokemon.cpp
		g++ -c pokemon.cpp
