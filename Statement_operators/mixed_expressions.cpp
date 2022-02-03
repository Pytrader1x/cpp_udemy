#include <iostream>
#include <vector>
using namespace std;

int main(){ 


    //Mixed type expressions
    // str to int conversions
    // conversions higher vs lower type
    // we can generally convert from lower to higher, as its valu
    // will likely fit in the higher

    //type coercion
    // promotion
    // integer to a double

    //demotion, higher type to lower type
    // 12.5 into int
    // so it becomes just 12
    // int num {0};
    // num = 100.2;
    // //this is demoted to 100
    // cout << num << endl;


    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl;

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;




    int total {};
    int num1, num2, num3 {};//all init to 0
    const int count {3};

    cout << "Enter 3 ints space sep ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;

    average = 0.0;
    average = static_cast<double>(total)/count;
    cout << "average is: " << average<< endl;
    

}