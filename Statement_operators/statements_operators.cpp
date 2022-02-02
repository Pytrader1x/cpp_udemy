#include <iostream>
#include <vector>
using namespace std;

int main(){


   cout << 34; // literal
   int favorite_number; // variable
   int a = 1, b = 2;
    
    cout << (1.5 + 2.8) << endl; // addition

    cout << (2 * 5) << endl; //multiplication

    // a > b;
    cout << (a>b) << endl;

   
    int num1 {10};// this is initialising
    int num2 {20}; // this is initialising
     // Asignment operator is where you change the value
    num1 = 100; //assignment only, updating num1 
     //to literal 100
     // R value is the contents of num1
     // L value is the location of num1
    cout << num1 << endl;
    cout << num2 << endl;

    // 11 = num1; // literals dont have locations

    num1 = num2 = 300;
    cout << num1 << endl;
    cout << num2 << endl;
}