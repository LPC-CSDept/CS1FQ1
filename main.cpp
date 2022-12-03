#include "q1.hpp"

int main()
{
	const int N = 16;
	Student *ptr;

	ptr = makeStudent(N);
	printStudent(ptr, N);
	sortStudent(ptr, N);
	printStudent(ptr, N);
}