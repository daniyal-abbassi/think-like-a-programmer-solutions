#include <iostream>
#include <string>
using namespace std;

int main()
{ // LUHN CHECKSUM VALIDAION; do not save the entire number;
    int number, temp, sum = 0, length = 0;
    cout << "enter a number" << endl;
    cin >> number;
    while (number != 0)
    {
        temp = number % 10; // this trich will give us the last digit
        number /= 10;       // and this trich will get rid of the last digit PERFECT!!!!!!!!!!!!!!!!!!!!!!!!!!!

        if (length % 2 != 0)
        {
            if (to_string(temp * 2).length() != 1)
            {
                int tempNum = temp * 2;
                int temptempNum;
                int tempLen = 0;
                do
                {
                    temptempNum = tempNum % 10;
                    tempNum /= 10;
                    sum += (tempNum + temptempNum);
                } while (to_string(tempNum).length() != 1);
            }
            else
            {
                sum += temp * 2;
            }
        }
        else
        {
            sum += temp;
        }
        length++;
    }
    cout << "sum is ; " << sum << endl;
    if(sum%10==0) {
        cout<<"this is a valid number"<<endl;
    } else {
        cout<<"This is not a valid number"<<endl;
    }
}