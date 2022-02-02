#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    // Increment ++
    // decrement --

    //increments or decremements operand by 1
    //can be used with ints floats, pointers

    //prefix ++num
    //postfix num++
    //dont overuse this, never use twice for same variable in same statement

    int counter {10};
    int result {0};

    cout << "Counter: " << counter << endl;
    counter = counter +1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;
    // these are the same
    ++counter;
    cout << "Counter: " << counter << endl;

    //preincrement
    
    counter = 10;
    result= ++counter;
    cout << "Result: " << result << endl;

    //post increment
    // We will increment counter after assigning to result
    counter = 10;
    result= counter++;
    cout << "Result: " << result << endl;
    cout << "Counter: " << counter << endl;

    counter = 10;
    result = 0;
    cout << "Counter: " << counter << endl;
    result= ++counter +10; // evaluate pre increment + 10
    cout << "Result: " << result << endl;
    cout << "Counter: " << counter << endl;

    counter = 10;
    result = 0;
    cout << "Counter: " << counter << endl;
    result= counter++ +10; // evaluate pre increment + 10
    cout << "Result: " << result << endl;
    cout << "Counter: " << counter << endl;





}