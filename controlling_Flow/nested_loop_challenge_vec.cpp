#include <vector>
#include <iostream>
using namespace std;


double print_all(){
    
}


int main(){

    int list[] = {1,2,3,4};

    char choice{};

    cout << "Choose:"<<endl;
    cout<< "P print num"<<endl;
    cout<< "A Add num"<<endl;
    cout<< "M Mean num"<<endl;
    cout<< "S smallest num"<<endl;
    cout<< "L largest num"<<endl;
    cout<< "Q Quit"<<endl;

    cin >> choice;
    choice = toupper(choice);
    cout<< "Choice: " << choice << endl;

    
    cout << "Starting" << endl;




    // vector<int> vec {1, 2, 3};
    // int output = calculate_pairs(vec);
    // cout << output<< endl;

}
