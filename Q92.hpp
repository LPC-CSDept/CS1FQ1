#ifndef Q92
#define Q92
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

const int MAXSIZE = 5000;
struct Names
{
        string stname;
        string gender;
        int year;
        string name;
        int count;
};

int makeRecord(Names[]);
int printRecord(Names[], int, string);
int findNames(Names[], int, string, int);

#endif
