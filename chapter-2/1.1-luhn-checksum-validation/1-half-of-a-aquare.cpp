#include <iostream>
using namespace std;


int main()
{
    //first part: reduce a number from 5 to 1;
    for (int row =1; row<=5; row++) {
        cout<<6-row<<'\n';
    }

    //my approach:
    int n=5;   // A variable for how itrates should the loop take;
    for (int i=0; i<5; i++) { // The i loop will run 5 times;

        for(int j=0; j<=n; j=j+1) { // The j loop will run from 5 to 1;
            cout<<"#";
        }
       cout<<"\n";
       n--; // The n variable is decremented by 1 after each iteration; and this will cause the j loop to run less times in each iteration;
    }
    
    //desired approach:
    for (int row=1; row<=5; row++) {
        for (int hash=1; hash<=6-row;hash++){
            cout<<"#";
        }
        cout<<"\n";
    }

    //another shape: 
    //#
    //##
    //###
    //####
    //###
    //##
    //#
    for (int row=-3; row<=3;row++) {
        
        for (int hash=1; hash<=4-abs(row);hash++){
            cout<<"#";
        }
        cout<<"\n";
    }

}