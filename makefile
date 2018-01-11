
output: main.o Animal.o Menu.o Zoo.o
	g++ main.cpp Animal.cpp Menu.cpp Zoo.cpp -o output

main.o: main.cpp
	g++ -c main.cpp

Animal.o: Animal.cpp Animal.hpp
	g++ -c Animal.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -c Menu.cpp

Zoo.o: Zoo.cpp Zoo.hpp
	g++ -c Zoo.cpp

clear:
	rm *.o output
