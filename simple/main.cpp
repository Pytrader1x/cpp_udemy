#include <iostream>
#include <climits>
using namespace std;
int main(){

    int favourite_number;
    std::cout << "Enter your favourtie number between 1 & 100" << std::endl;
    favourite_number = 55;
    std::cout << "Your favourite number is:"<< favourite_number << std::endl;
    std::cout << "SIze of fav number is: " << sizeof(favourite_number) << endl;
    cout << "size of char " << sizeof(char) << endl;

    const double temp = 55;
    int temp_2;
    temp_2 = temp * 2;
    cout << temp_2;

    return 0;

}