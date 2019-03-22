run: main
	./main

main:
	g++ -o main main.cpp utils.h utils.cpp sort.h sort.cpp search.h search.cpp

clean:
	rm a.out *.gch
