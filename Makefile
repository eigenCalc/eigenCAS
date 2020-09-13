all: main.cpp stack.cpp stack.hpp giac/*.* 
	g++ -Wall main.cpp stack.cpp giac/*.cpp -o stack.bin 

	
clean:
	rm stack.bin
