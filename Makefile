all: main.cpp stack.cpp stack.hpp
	clang++ -Wall main.cpp stack.cpp -o stack.bin

	
clean:
	rm stack.bin
