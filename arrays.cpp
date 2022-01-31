#include <iostream>

using namespace std;

int main(){

    int num {22};
    // When declaring we must define the size of the array for the compiler
    int test_scores [5] {100, 95, 99, 87, 88};

    int temperatures [5] {}; // This initialises everythin to zero

    int high_score_per_level [10] {3, 5}; //init ele 0 & 1 == 3, 5

    const int days_in_year {365};

    double hi_temperatures [days_in_year] {0}; //init all to zero

    int another_array [] {1,2,3,4,5}; // Size auto calculated
    cout << days_in_year << endl;
    
    cout << "Which element in test_scores would you like to change " << endl;
    int index = {0};
    int value = {0};
    cin >> index;
    cout << test_scores[index] << endl;
    cout << "What would you like to change 2" << test_scores[index] << " to?" << endl;

    cin >> value;
    test_scores[index] = value;
    cout << "\nUpdated to " << test_scores[index] << endl;


    
}