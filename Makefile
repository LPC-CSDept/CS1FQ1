all: clean test
programtest: tests.cpp Q92.cpp 
	g++ -fsanitize=address --std=c++17 tests.cpp Q92.cpp -o programtest 
test: programtest 
	./programtest
clean:
	rm -f programtest a.out
