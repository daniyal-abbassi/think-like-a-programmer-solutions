#include <iostream>
using namespace std;


int main()
{
    cout<<"Enter a number with any digits :"<<endl;
    char digitChar = cin.get();
    int number = digitChar - '0';
    digitChar = cin.get();
    while(digitChar != 10)
    {
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }
    cout<<"the number you entered is : "<<number<<endl;
}