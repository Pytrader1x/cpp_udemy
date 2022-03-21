#include <iostream>
#include <cmath>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);




int main() {

int my_score[] {100, 98, 90, 86, 84};
print_array(my_score, 5);
set_array(my_score, 5, 33);
print_array(my_score, 5);
// print_array(my_score,5,100);

}

void set_array(int arr[], size_t size, int value){
    for(size_t i{0}; i < size; ++i){
        //modifies the memory lcoation of array passed
        arr[i] = value;
    }
}

void print_array(int arr[], size_t size){
    for(size_t i{0}; i < size; ++i){
        cout << arr[i] << endl;
    }
}