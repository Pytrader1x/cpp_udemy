#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    
    
  // Looping, iteration




    //while loop, checks at begining of loo

    // do while checks at end of loop

    // for loop

    //for(initialisation; condition;increment)
        // statement

    int i{0};

    for(i=1;i <=5; ++i)
        cout << i << endl;

    for (int x{1}; x<=5; ++x){
         // here i is only visible in the loop
        if(x%2==0)
            cout << "Even x: " << x << endl;
        cout << "X: " <<x << endl;

    }

    // iterate arrays
    int scores[] {100, 90, 87};
    for(int i{0}; i<3; ++i){
        cout << scores[i]<<endl;

    }

    for(int i{1}, j{5}; i <=5;++i,++j){
        cout << i << " * " << j << ": " << i *j << endl;
    }
       


}