#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    // Testing expressions are equal
    // compares the values of 2 expressions

    bool equal_result{false};
    bool not_equal_result{false};
    int num1, num2{1};

    cout << "Enter two ints sep space";
    cin >> num1 >> num2;
    equal_result = (num1==num2);
    not_equal_result = (num1!=num2);
    cout << "Comparison result equals: " << equal_result << endl;
    cout << "Comparison result not equals: " << not_equal_result << endl;
    

    // Watch out when we compare a double like
    // 10.999999999999 & 11 are equal so be careful

    double num3, num4{};
    cout << "Enter two doubles sep space";
    cin >> num3 >> num4;
    cout << boolalpha;
    equal_result = (num3==num4);
    cout << "Comparison result doubles equals: " << equal_result << endl;




    cout << (num1==num2) << endl;
    cout << boolalpha; // converts 0 1 to true false
    cout << (num1==num2) << endl;
    cout << noboolalpha; // back to 0 1
    cout << (num1==num2) << endl;

}