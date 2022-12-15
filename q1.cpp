#include "q1.hpp"

Student *makeStudent(int N)
{

	return ptr;
}

void printStudent(Student *ptr, int N)
{
	double sctemp1;
	cout << "******************* Student Information ******************** \n";
	for (int i = 0; i < N; i++)
	{
		sctemp1 = 0;
		cout << setw(20) << right << (ptr + i)->first << "\t" << setw(20) << left << (ptr + i)->last << "\t" << (ptr + i)->ssn << "\t ";
		for (int j = 0; j < SCN; j++)
		{

			cout << (ptr + i)->score.sc[j] << "\t";
			sctemp1 += (ptr + i)->score.sc[j];
		}
		cout << (ptr + i)->score.grade << "\t\t\t\t";
		cout << sctemp1 << "\t";
		cout << endl;
	}
}
void sortStudent(Student *ptr, int N, string field, int asc)
{
}
