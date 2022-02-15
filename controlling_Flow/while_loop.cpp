#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 
    //while loop
    int i {};
    while(i <=10){
        if(i%2==0)
            cout<<i<<endl;
        i++;
    }  

    int scores[] {100, 90, 87};
    i = 0;

    while(i <3){
        cout << scores[i] << endl;
        i++;
    }

    int number {};

    cout << "Enter an int less 100";
    cin >> number;

    while(number>=100){
        cout<<"\nEnter an integer less than 100";
        cin >> number;
    }

    while(number<=1 || number>=5){
        cout << "\nEnter an int between 1 & 5";
        cin >> number;
    }

    cout << "Thanks" << endl;

    bool done{false};

    number = 0;

    while(!done){
        cout << "Enter an int between 1 & 5:";
        cin >> number;
        if(number<=1 || number>=5){
            cout<< "Out of range"<< endl;
        }else{
            cout << "Thanks";
            done = true;
        }
    }

    
 





}