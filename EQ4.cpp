#include <iostream>

using namespace std;

int main()
{
    int arr[5][5] = {{1, 0, 0, 0, 2}, {0, 1, 0, 2, 0}, {0, 0, 3, 0, 0}, {0, 2, 0, 1, 0}, {2, 0, 0, 0, 1}};
    int j = 4, i;
    
    for (i = 0; i < 5; i++)
    { // main scope
        cout << arr[i][i];
        arr[i][i] = arr[i][i] * 2;
    }
    cout << "\n";
    for (i = 0; i < 5; i++)
    {   // second scope
        cout << arr[i][j];
        arr[i][j] = arr[i][j] * 2;
        j--;
    }
    cout << "\n";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << "\n";
    }
}