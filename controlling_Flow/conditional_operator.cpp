#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    
    
    // if else in a single construct

    int a{10}, b{20};

    int result{};

    result = (a > b) ? a:b;
    cout << result << endl;

    result = (a < b) ? (b-a):(a-b);
    cout << result << endl;

    result = (b != a) ? (a/b):0;
    cout << result << endl;


    int num{};
    cout << "Enter an int: ";
    cin >> num;

    if (num%2 == 0)
        cout << num << " is even" << endl;

    else
        cout << num << " is odd" << endl;

    cout << num << " is " << ((num%2==0) ? "even":"odd") << endl;


    int num1{}, num2{};

    cout << "Enter two integers ";
    cin >> num1 >> num2;
    cout << num1  << " " << num2 <<endl;

    if(num1!=num2){         //if evaluates to true then return first element before:
        cout <<"Largest " << ((num1>num2)? num1:num2) << endl;
                            //if evaluates to false then return second element after :
        cout << "Smallest "<< ((num1 < num2) ? num1:num2)<<endl;
    }else
    {
        cout<< "The numbers are the same "<< endl;

    }







}