#include <iostream>

using namespace std;

int main(){

    
    int movie_rating [3][4]{

        {2, 4, 5, 5},
        {2, 4, 5, 2},
        {2, 4, 3, 5},
    };

    cout << movie_rating[0][1] << endl;

    cout << movie_rating.at(0).at(0) << endl;

    
    
}