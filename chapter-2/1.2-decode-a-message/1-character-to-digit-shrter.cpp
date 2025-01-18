#include <iostream>
using namespace std;


main()     //SHORTER VERSION OF CONVERTING TO NUMBER.
{
    cout<<"Enter two digit number: "<<endl;
    char digitChar = cin.get();
    int overAllnumber = (digitChar - '0') * 10;
     digitChar = cin.get();
    overAllnumber += (digitChar - '0');
    cout<<"The number is: "<<overAllnumber<<endl;
}