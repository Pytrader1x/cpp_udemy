#include <iostream>
#include <vector>
using namespace std;

int main(){ 

int num1{},num2{};
cout<<boolalpha;
cout << "Enter two ints ";
cin >> num1 >> num2;
cout << num1 << " >" << num2 << ":" <<(num1>num2) << endl;
cout << num1 << " <" << num2 << ":" <<(num1<num2) << endl; 
cout << num1 << " = " << num2 << ":" <<(num1==num2) << endl;
cout << num1 << " >=" << num2 << ":" <<(num1>=num2) << endl;
cout << num1 << " <=" << num2 << ":" <<(num1<=num2) << endl;

}