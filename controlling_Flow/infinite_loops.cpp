#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 

    //infinite for loop
    for(;;){
        cout << "THis prints forever"<<endl;
    }    

    while(true){
        cout << "THis prints forever"<<endl;

    }

    do{
        cout << "THis prints forever"<<endl;
    }while(true);

    while(true){
        char again{};
        cout << "Loop again"<<endl;
        cin >> again;

        if(again=='N' || again=='n'){
            break;
        }
    }

}