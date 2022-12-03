all: clean test
programtest: tests.cpp q1.cpp 
	g++ -fsanitize=address --std=c++17 tests.cpp q1.cpp -o programtest 
test: programtest 
	./programtest
clean:
	rm -f programtest a.out