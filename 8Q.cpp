#include <iostream>

using namespace std;

int main()
{
    int i;
    int arr[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};

    for (i = 0; i < 5; i++)
    {

        cout << arr[i][i];
    }
}