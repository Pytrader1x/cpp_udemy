#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 
    //Do while loop

    //at least one iteration

    char selection{};

    do{
        cout<<"\n====="<<endl;
        cout << "1, a"<< endl;
        cout << "2, b"<< endl;
        cout << "3, c"<< endl;
        cout << "4, d"<< endl;
        cout << "Q, Quit"<< endl;
        cout << "\nEnter selection: ";
        cin >> selection;

        if(selection=='1'){
            cout<< "You chose a";
        }
        else if(selection=='2'){
            cout<< "You chose b";
        }
        else if(selection=='3'){
            cout<< "You chose c";
        }
        else if(selection=='4'){
            cout<< "You chose d";
        }
        else if(selection=='q'||selection=='Q'){
            cout<< "You chose quit";
        }
        else{
            cout << "Unknown selection";
        }


    }while(selection!='q' && selection!='Q');



  
 





}