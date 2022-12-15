#ifndef FinalQ1
#define FinalQ1
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const unsigned short SCN = 5;
struct Scores
{
	double sc[SCN];
	string grade;
};
struct Student
{
	string first;
	string last;
	string ssn;
	Scores score;
};
void printStudent(Student *, int);
Student *makeStudent(int);
void sortStudent(Student *, int, string, int);

#endif