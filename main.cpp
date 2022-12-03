#include "Q92.hpp"

int main()
{
        Names names[MAXSIZE];
        int numRecords, cnt;

        numRecords = makeRecord(names);
        cout << "Total " << numRecords << " records have been made\n";

        cnt = printRecord(names, numRecords, "CA");
        cout << "Total " << cnt << " records are printed \n";

        cnt = findNames(names, numRecords, "NY", 2018);
        cout << "Total " << cnt << " records are found\n";

        cnt = findNames(names, numRecords, "CA", 2011);
        cout << "Total " << cnt << " records are found\n";
}