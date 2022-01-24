#include <iostream>
#include <climits>
using namespace std;
int main(){

    int favourite_number;
    std::cout << "Enter your favourtie number between 1 & 100" << std::endl;
    std::cin >> favourite_number;
    std::cout << "Your favourite number is:"<< favourite_number << std::endl;
    std::cout << "SIze of fav number is: " << sizeof(favourite_number) << endl;
    cout << "size of char " << sizeof(char) << endl;
    return 0;

}