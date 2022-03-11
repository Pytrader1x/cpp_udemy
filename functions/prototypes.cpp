#include <iostream>
#include <cmath>

using namespace std;

/*
We need the prototypes in either the .h header file or here at the top, so that main function
knows about them & can check their types
*/

void say_hello();
void say_world();
void plus(double);



int main() {

    //smaller programs have functions at the top of the file

    // larger programs have functions in a header file so the compiler knows what types each function accepts
    //.h header files, 

    // int function_name(int a); // prototype 

    // int function_name(int a){
    //     cout <<a<<endl;
    // }
    
    say_hello();
    say_world();
    plus(33);




}

void say_world(){
    cout << "world"<<endl;

}
void say_hello(){
    cout << "Hello ";
}

void plus(double a){
    cout << a*2<<endl;
}