#include <iostream>
#include <vector>
#include <iomanip>// to round data
using namespace std;

int main(){ 

    //Nested loops

    // for(int num1{1}; num1<=10;num1++){
    //     for (int num2{1};num2<=10; num2++){
    //         cout << num1 << " + "<< num2 << " = "<< num1*num2<<endl;
    //     }
    // }

    vector<int> data{};
    int num_items{};
    cout << "How many items:";
    cin >> num_items;

    for(int i{1};i<=num_items;++i){

        int data_item{};
        cout << "enter data item ";
        cin >> data_item;
        data.push_back(data_item);
    }
    cout <<"Displaying Historgram"<<endl;
    cout<<"============="<<endl;
    for(auto val:data){

        for(int i{1};i<=val;++i){
            cout << "-";
        }
        cout << endl;

            
    }




}