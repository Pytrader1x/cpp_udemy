#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    //% modulo or remainder only works with integers
    // + - * / are overloaded to work with multiple dypes
    int num1{200};
    int num2{100};

    cout << num1 + num2 << endl; 
    // c++ will eval the operation and then print
    
    int result = num1+ num2;
    cout<< result << endl;
    result = num1-num2;
    cout << result << endl;

    float result_dub;
    result_dub = num1/num2;
    cout << result_dub << endl;

    num1 = 10;
    num2 = 3;
    //modulo , 10 / 3, with left over is the output
    result = num1%num2;
    cout << result << endl;


    double num4 = 5.0;
    double num6 = 6.0;

    cout << num4/num6 << endl; // to get exact decimal we must 
            //have both elements as doubles or flaots etc

    // Eur to USD

    const double eur_usd {1.13};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcome to the EUR to USD Converter" << endl;
    cout << "Enter the value in Euros to covnert :";
    cin >> euros;
    dollars = euros * eur_usd;
    cout << euros << " EUR = $" << dollars << endl;





}