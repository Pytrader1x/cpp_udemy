#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    /*
    1 pound == 100 p
    50p is 50 p
    20p is 20 p
    10p is 10 p
    5p is 5 p
    2p is 2p
    1p is 1p

    enter an amount in pennies
    92p
    */
   int num1 = 126;
   int fifty = 0; 
   int _50Val= 50;
   int twenty = 0;  
   int balance = num1;
   int tens, fives, twos, ones = 0;


    fifty = num1/50;
    balance = num1% _50Val;//left over 20p
    cout << fifty << " 50ps" << endl;
    // cout <<  "Remainder: " << balance << endl;


    twenty = balance/20;
    balance%= 20;
    cout << twenty << " 20ps" << endl;


    tens = balance/10;
    balance%= 10;
    cout << tens << " 10ps" << endl;

    fives = balance/5;
    balance%= 5;
    cout << fives << " 5ps" << endl;

    twos = balance/2;
    balance%= 2;
    cout << twos << " 2ps" << endl;

    ones = balance/=1;
    balance%= 1;
    cout << ones << " 1ps" << endl;


    // _10s = num1/10;
    // num1%= _10s;
    // cout << _10s << " 10ps" << endl;

    return 0;
    

}