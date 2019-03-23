
CPP_FILES=$(wildcard *.cpp)
HEADER_FILES=$(wildcard *.h)

run: main
	./main

debug:
	g++ -g -o main $(CPP_FILES) $(HEADER_FILES)

main:
	g++ -o main $(CPP_FILES) $(HEADER_FILES)

clean:
	rm -f main *.gch
