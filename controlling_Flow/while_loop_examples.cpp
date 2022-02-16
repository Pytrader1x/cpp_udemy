#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 
    //while loop

    int num{};

    cout << "Enter pos int to count upto:";
    cin >> num;

    int i{1};

    while(num>=i){
        cout << i << endl;
        i++;
    }


    int number{};
    cout << "Enter pos int less than 100:";
    cin >> number;

    while(number>=100){
        cout << "Enter pos int less than 100:";
        cin >> number;
    }
    cout<< "Thanks";



  
 





}