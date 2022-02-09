#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    //   if (expr)
    //     statement1
    //   else 
    //     statement2
    int num{5};
    if(num >= 10){
        cout << "Num >= 10" << endl;
    }else{
        cout << "Num < 10" << endl;
    }

    if(num > 90)
        cout << "Num > 90" << endl;
    else if (num > 80)
        cout << "Num > 80" << endl;
    else if (num > 70)
        cout << "Num > 70" << endl;
    else // all others
        cout << "small" << endl;
    


    int num_new {};
    cout << "Enter new num : ";
    cin >> num_new;


    if(num_new > 90)
        cout << "Num > 90" << endl;
    else if (num_new > 80)
        cout << "Num > 80" << endl;
    else if (num_new > 70)
        cout << "Num > 70" << endl;
    else // all others
        cout << "small" << endl;
    return 0;

    int age = 20;
    
    if(age >= 16){
        cout << "Yes - you can drive!";
    }
    else{
        cout << "Sorry, come back in  " << (16-age) << " Years";
    }

}