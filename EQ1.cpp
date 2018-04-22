#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int arr[2][2] = {{1, 0}, {0, 1}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << "\n";
    }
}