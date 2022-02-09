#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    /*
    // if statement

    if-else statements

    nested if statements

    switch statement

    conditional operator ?:

    Iteration looping
    for loop
    range based for loop
    while loop
    do-while loop
    continue & break
    infinite loop
    nested loops

    */
   // if expr true then execute statement
//    if(exp){
//        statement
//    }

    int num = 16;

    // if(num > 10){
    //     ++num;
    //     cout << num << endl;

    // }

    num = {};
    const int min{10};
    const int max{100};
    cout << "enter and int between 10 & 100" << endl;

    cin >> num;

    // if (num < min){
    //     cout << "-----";
    //     cout << num << " < 10" << endl;
    // }

    if (num >= min){
        cout << "----- statement 1";
        cout << num << " >= 10" << endl;
        int diff{num-min};
        cout << diff << " From min"<< endl;
    }

    if(num<= max){
        cout << "----- statement 2"<< endl;
        int diff{num-max};
        cout << diff << " From max" << endl;
    }

    if(num>= min && num <= max){
        cout << "----- statement 3"<< endl;
        cout << "in RANGE"<< endl;
    }

    if(num== min || num == max){
        cout << "----- statement 3"<< endl;
        cout << "0n BOUNDARY"<< endl;
    }

      

    return 0;
    

}