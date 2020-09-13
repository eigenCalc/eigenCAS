all: main.cpp stack.cpp stack.hpp
	g++ -Wall main.cpp stack.cpp -o stack.bin

	
clean:
	rm stack.bin
