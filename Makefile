# Makefile

.PHONY: compile compile-zero-copy

compile:
	g++ -std=c++17 main.cpp ParseFile.cpp PropertiesReader.cpp ReadFile.cpp -o prop

compile-zero-copy:
	g++ -std=c++17 main.cpp ParseFileZeroCopy.cpp PropertiesReader.cpp ReadFile.cpp -DUSE_ZERO_COPY -o propzerocopy

compile-all:
	make compile
	make compile-zero-copy
