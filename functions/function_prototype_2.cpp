#include <iostream>
#include <cmath>

using namespace std;

void pass_by_value(int i){
    i = 1000;
    cout << i << endl;
}

void pass_by_pointer(int *i){

    *i = 1000;
    cout << "Memory address: " << i << endl;
    cout << *i << endl;

}

int main() {

    int num{0};
    cout << "The values of num before pass by value " << num << endl;

    pass_by_value(num);
    cout << "The value of num after pass by value " << num << endl;

    pass_by_pointer(&num);
    cout << "The value of num after pass by pointer " << num << endl;




    



}
