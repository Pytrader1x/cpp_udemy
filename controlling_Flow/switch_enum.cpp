#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    
    enum Direction {left, right, up, down};

    Direction heading = left;
    

    switch (heading)
    {
    case left:
        /* code */
        cout << "Going left " << endl;
        break;
    
    default:
        break;
    }




}