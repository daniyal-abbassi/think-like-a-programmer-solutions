#include <iostream>
using namespace std;

//cout first line 8 hash, second line 6 hash, third line 4 hash, fouth line 2 hash
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j = 1; j<=10-(i*2); j++)
        {
            cout << "#";
        }
        cout<<endl;
    }
}