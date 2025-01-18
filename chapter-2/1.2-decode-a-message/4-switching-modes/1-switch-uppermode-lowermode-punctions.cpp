#include <iostream>
using namespace std;

int main()
{
    enum modeType  {UPPERCASE, LOWERCASE, PUNCTUATION};
    int number;
    modeType mode = UPPERCASE;
    cout << "Enter some Numbers Ending in -1: "<<endl;
    do
    {
        cin >> number;
        cout << "Number read: "<<number;
        switch(mode) {
            case UPPERCASE:
                number = number % 27;
                cout << ".Modulo 27: "<<number<<". "<<endl;
                if(number == 0)
                {
                    cout<<"switched to LOWERCASE";
                    mode = LOWERCASE;
                }
            break;
        case LOWERCASE:
            number = number % 27;
            cout<<".Modulo 27: "<<number<<". "<<endl;
            if(number == 0)
            {
                cout<<"switched to punctuation";
                mode = PUNCTUATION;
            }
            break;
        case PUNCTUATION:
            number = number % 9;
            cout<<".Modulo 9: "<<number<<".";
            if(number == 0) {
                cout<<"switched case to uppercase"<<endl;
                mode = UPPERCASE;
            }
            break;
        }
        cout<<endl;
    } while (number != -1);
    
}