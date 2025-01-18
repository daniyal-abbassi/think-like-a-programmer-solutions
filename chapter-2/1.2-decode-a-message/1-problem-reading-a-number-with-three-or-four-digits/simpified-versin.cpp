//use one char and two int 
#include <iostream>;
using namespace std;

int main()
{
    cout<<"Enter a three or four digit number: "<<endl;
    char digitChar = cin.get();
    int threeDigitNumber = (digitChar - '0') * 100;
    int fourDigitNumber = (digitChar - '0') * 1000;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - '0') * 10;
    fourDigitNumber += (digitChar - '0') * 100;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - '0');
    fourDigitNumber += (digitChar - '0') * 10;
    digitChar = cin.get();
    if(digitChar == 10) cout<<"three digit number is: "<<threeDigitNumber<<endl;
    else {
        fourDigitNumber+=(digitChar-'0');
        cout<<"four digit number is : "<<fourDigitNumber<<endl;
    }
}