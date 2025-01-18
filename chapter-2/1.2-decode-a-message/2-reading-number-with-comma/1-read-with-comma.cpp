#include <iostream>
using namespace std;

int main()
{
    char digitChar;
    do
    {
        cout<<"enter the number with any length: "<<endl;
        digitChar = cin.get();
        int digitNumber = (digitChar - '0');
        digitChar = cin.get();
        while((digitChar != 10) && (digitChar!=','))
        {
            digitNumber = digitNumber * 10 + (digitChar - '0');
            digitChar = cin.get();
        } 
        cout<<"Number Entered! "<<digitNumber<<endl;
    } while (digitChar != 10);
    
}