#include <iostream>
#include <vector>
using namespace std;

int main(){

    
    vector <int> vector1; // auto set to zero
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nVector 1 " << vector1.at(0)<< " " << vector1.at(1)<< " " << vector1.size() <<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nVector 1 " << vector2.at(0)<< " " << vector2.at(1)<< " " << vector2.size() <<endl;

    vector <vector<int> > vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "---------------" << endl;
    for (int i = 0; i < vector2d.size(); i++)
    {
        for (int j = 0; j < vector2d[i].size(); j++)
        {
            cout << vector2d[i][j] << " ";
        }   
        cout << endl;
    }
    cout << "---------------" << endl;

}