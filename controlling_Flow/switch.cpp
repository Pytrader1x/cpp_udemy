#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    

    // switch (integer_control_expr){
    //     case expression_1; statement1; break;
    //        default:
    // // }

    // Keep going until we hit a break statement

    char letter_grade{};
    cout << "Enter letter grade" << endl;
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "You need 90" << endl;
            break;
        case 'b':
        case 'B':
            cout << "you need 80" << endl;
            break;

        case 'c':
        case 'C':
            cout << "you need 70" << endl;
            break;

        case 'd':
        case 'D':
        {
            char confirm {};
            cout << "Are you sure? Y / N ";
            cin >> confirm;
            if(confirm == 'Y'|| confirm == 'y'){
                cout << "you need 60, no studying though" << endl;
            }else if(confirm == 'n' || confirm == 'N')
                cout << "Good go study" << endl;
                break;
            
        }
            
        default:
            cout << "Not valid letter" << endl;
            break;
    }




}