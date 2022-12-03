// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "q1.hpp"
using namespace std;
/*
Alfalfa   Aloysius   123-45-6789 40.0    90.0   100.0    83.0    49.0   D-
Alfred    University 123-12-1234 41.0    97.0    96.0    97.0    48.0   D+
Gerty     Gramma     567-89-0123 41.0    80.0    60.0    40.0    44.0   C
Android   Electric   087-65-4321 42.0    23.0    36.0    45.0    47.0   B-
Bumpkin   Fred       456-78-9012 43.0    78.0    88.0    77.0    45.0   A-
Rubble    Betty      234-56-7890 44.0    90.0    80.0    90.0    46.0   C-
Noshow    Cecil      345-67-8901 45.0    11.0    -1.0     4.0    43.0   F
Buff      Bif        632-79-9939 46.0    20.0    30.0    40.0    50.0   B+
Airpump   Andrew     223-45-6789 49.0     1.0    90.0   100.0    83.0   A
Backus    Jim        143-12-1234 48.0     1.0    97.0    96.0    97.0   A+
Carnivore Art        565-89-0123 44.0     1.0    80.0    60.0    40.0   D+
Dandy     Jim        087-75-4321 47.0     1.0    23.0    36.0    45.0   C+
Elephant  Ima        456-71-9012 45.0     1.0    78.0    88.0    77.0   B-
Franklin  Benny      234-56-2890 50.0     1.0    90.0    80.0    90.0   B-
George    Boy        345-67-3901 40.0     1.0    11.0    -1.0     4.0   B
Heffalump Harvey     632-79-9439 30.0     1.0    20.0    30.0    40.0   C
*/

TEST_CASE("Ex1 makeStudent() ", "[example]")
{
	const int N = 16;
	Student s;
	string sc;
	int i;
	ifstream ifs;
	Student *ptr;
	ifs.open("grades.txt");
	if (!ifs)
	{
		cout << "File Open Error\n";
		exit(0);
	}
	ptr = makeStudent(N);
	i = 0;
	while (ifs >> s.first >> s.last >> s.ssn)
	{
		cout << setw(20) << right << (ptr + i)->first << "\t" << setw(20) << left << (ptr + i)->last << "\t" << (ptr + i)->ssn << "\t ";

		for (int j = 0; j < SCN; j++)
		{
			cout << (ptr + i)->score.sc[j] << "\t";
			ifs >> sc;
			s.score.sc[j] = stod(sc);
		}
		ifs >> s.score.grade;
		cout << (ptr + i)->score.grade << "\t\t\t\n";

		REQUIRE((ptr + i)->first == s.first);
		REQUIRE((ptr + i)->last == s.last);
		REQUIRE((ptr + i)->score.sc[0] == s.score.sc[0]);
		REQUIRE((ptr + i)->score.sc[1] == s.score.sc[1]);
		REQUIRE((ptr + i)->score.sc[2] == s.score.sc[2]);
		REQUIRE((ptr + i)->score.sc[3] == s.score.sc[3]);
		REQUIRE((ptr + i)->score.sc[4] == s.score.sc[4]);
		REQUIRE((ptr + i)->score.grade == s.score.grade);
		i++;
	}
	cout << endl;
}

TEST_CASE("Ex2 makeStudent() ", "[example]")
{
	/*
	Alfred
	     Alfalfa
	      Rubble
	      Backus
	     Bumpkin
	     Airpump
	    Franklin
	    Elephant
	       Gerty
	   Carnivore
	     Android
		Buff
	       Dandy
	   Heffalump
	      Noshow
	      George
	*/
	const int N = 16;
	string fnames[N] = {
	    "Alfred",
	    "Alfalfa",
	    "Rubble",
	    "Backus",
	    "Bumpkin",
	    "Airpump",
	    "Franklin",
	    "Elephant",
	    "Gerty",
	    "Carnivore",
	    "Android",
	    "Buff",
	    "Dandy",
	    "Heffalump",
	    "Noshow",
	    "George"};

	Student *ptr;
	ptr = makeStudent(N);
	sortStudent(ptr, N);
	INFO("Student's name must be same as the list of names\n");
	for (int i = 0; i < N; i++)
	{
		// string target = (ptr + i)->first;
		cout << setw(20) << right << (ptr + i)->first << "\n";
		REQUIRE((ptr + i)->first == fnames[i]);
		// REQUIRE(target == fnames[i]);
	}
	cout << endl;
}