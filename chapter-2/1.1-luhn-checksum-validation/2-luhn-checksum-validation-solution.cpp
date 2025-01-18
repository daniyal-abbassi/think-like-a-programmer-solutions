#include <iostream>
using namespace std;

// The Slution for checksum;
int doubleDigitValue(int digit) // make function for doubling down a number and adding if it's greater then 10;
{
    int doubleNumber = 2 * digit;
    int sum;
    if (doubleNumber >= 10)
        sum = 1 + doubleNumber % 10;
    else
        sum = doubleNumber;
    return sum;
}

int main()
{
    // PROCCESS THE NUMBER AS THE USER ENTER IT
    char digit;
    int checksum;
    int position=1;
    int evenNumberDigits = 0;
    int oddNumberDigits = 0;
    cout<<"enter a number : "<<endl;
    digit = cin.get();
    while(digit!=10)
    {
        if(position % 2 ==0 )
        {
            oddNumberDigits += doubleDigitValue(digit-'0');
            evenNumberDigits += digit -'0';
        } else {
            evenNumberDigits += doubleDigitValue(digit-'0');
            oddNumberDigits += digit - '0';
        }
        digit = cin.get();
        position++;
    }

    if((position -1) % 2 == 0) checksum = evenNumberDigits;
    else checksum = oddNumberDigits;

    cout << "the checkdum is " << checksum << endl;
    if (checksum % 10 != 0)
        cout << "it is not a valid number!" << endl;
    else
        cout << "this is a valid number" << endl;
}
