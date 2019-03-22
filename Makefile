run: main
	./main

main: clean
	g++ -o main main.cpp utils.h utils.cpp sort.h sort.cpp search.h search.cpp datastructs.h

clean:
	rm -f main *.gch
