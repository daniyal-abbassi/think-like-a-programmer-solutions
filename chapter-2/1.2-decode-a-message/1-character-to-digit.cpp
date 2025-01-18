#include <iostream>;
using namespace std;


main()        //CONVERT A TWO DIGIT NUMBER(IN STRING) TO A NUMBER:
{
    cout<<"Enter tow digits number: "<<endl;
    char numberCharacterOne = cin.get();
    char numberCharacterTwo = cin.get();
    int digitNumberOne = numberCharacterOne - '0';
    int digitNumberTwo = numberCharacterTwo - '0';
    int overAllNumber = digitNumberOne*10 + digitNumberTwo;
    cout<<"The number you entered is: "<<overAllNumber<<endl;

}