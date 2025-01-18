#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a number between 1-26: "<<endl;
    int number;
    cin >> number;
    char outputcharcter;
    outputcharcter = number + 'A' -1;
    cout<<"Equivalent symbol: "<<outputcharcter<<endl;
}

int main()
{
    int number;
    cin >> number;
    char outputCharacter;
    switch(number)
    {
        case 1: outputCharacter = '!'; break;
        case 2: outputCharacter = '?'; break;
        case 3: outputCharacter = ','; break;
        case 4: outputCharacter = '.'; break;
        case 5: outputCharacter = ' '; break;
        case 6: outputCharacter = ';'; break;
        case 7: outputCharacter = '"'; break;
        case 8: outputCharacter = '\''; break;
    }
    cout<< "Equivalent sybol: "<<outputCharacter<<endl;
}