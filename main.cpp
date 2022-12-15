#include "q1.hpp"

int main()
{
	const int N = 16;
	Student *ptr;

	ptr = makeStudent(N);
	printStudent(ptr, N);
	sortStudent(ptr, N, "name", 0);
	printStudent(ptr, N);
	sortStudent(ptr, N, "name", 1);
	printStudent(ptr, N);
	sortStudent(ptr, N, "score", 0);
	printStudent(ptr, N);
	sortStudent(ptr, N, "score", 1);
	printStudent(ptr, N);
}