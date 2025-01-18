#include <iostream>
using namespace std;

// 8lines that goes:  2#, 4#, 6#, 8#, 8#, 6#, 4#, 2#

int main()
{
    for (int i = -3; i <= 4; i++)
    {
        for (int j = 1; j <= 8 - 2 * abs(i) ; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}