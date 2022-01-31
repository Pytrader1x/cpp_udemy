#include <iostream>
#include <vector>
using namespace std;

int main(){

    
    vector <int> test_scores (10); // auto set to zero
    vector <char> vowels (5);

    // vector <char> vowels_inited {'a','e','i','o','u'};

    vector <double> hi_temperatures (365, 80.0);

    cout << hi_temperatures[0]<< endl; // no bounds checking

    //vector syntax methods to check element exists
    
    cout << hi_temperatures.at(1)<< endl; // no bounds checking
    hi_temperatures.at(1) = 99;
    cout << hi_temperatures.at(1)<< endl; // no bounds checking
    hi_temperatures.push_back(399.9);
    vowels.push_back('r');
    cout << vowels.back() << endl;
    vowels.push_back('t');
    cout << vowels.back() << endl;
    cout << hi_temperatures.back();

    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }


}