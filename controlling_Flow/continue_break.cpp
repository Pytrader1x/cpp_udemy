#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 
    //Continue & break statements

    //try to avoid too many continue & breaks

    vector<int> values{1,2,-1,-99,7,8,10};

    for(auto val: values){
        if(val==-99){
            cout << "Found " << val<<endl;
            break;
        }else if(val==-1){
            continue;
        }
        else{
            cout << val<<endl;
        }
    }




  
 





}