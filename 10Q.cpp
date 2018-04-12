#include <iostream>
using namespace std;

int main()
{

    int x;
    int arrOfInt[20] = {54, 34, 52, 55, 6, 8, 45, 34, 63, 32, 66, 43, 34, 54, 21, 78, 34, 54, 2, 7};

    for (int i = 0; i < 20; i++)
    {
        if (i == 0)
        { // the first item of the array
            x = arrOfInt[i];
        }
        else // if not the first
        {
            if (x > arrOfInt[i]) // here is the magic switch the sign to get the greater number
            {
                x = arrOfInt[i];
            }
        }
    }

    cout << "The lower number is => " << x;
}
