#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[] = "Almo7aya";
    char rName[8];

    int iR = 0;
    int i = 8;
    while ( i > 0 )
    {
        rName[iR] = name[i];
        iR++;
        i--;
    }

    cout << name << "\n";

    for (int i = 0; i < 9; i++)
    {
        cout << rName[i];
    }
}