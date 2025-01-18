// READING A NUMBER STRING WITH THREE OR FOUR DIGITS
// RULES:    one char and one int
#include <iostream>
using namespace std;


 int main()
{
    cout<<"Enter a three or four digit number: "<<endl;
    char digitChar = cin.get();
    int digitNumber = (digitChar - '0') * 100;
    digitChar = cin.get();
    digitNumber += (digitChar - '0') * 10;
    digitChar = cin.get();
    digitNumber += (digitChar - '0');
    digitChar = cin.get();
    if(digitChar == 10) cout<<"three digit number is: "<<digitNumber<<endl;
    else {
        digitNumber=digitNumber * 10 + (digitChar-'0');
        
        digitChar = cin.get();
        if(digitChar == 10) cout<<"four digit number is : "<<digitNumber<<endl;
        else {
            digitNumber = digitNumber * 10 + (digitChar - '0');
            cout<<"five digit number is : "<<digitNumber<<endl;
        }
    }
}
