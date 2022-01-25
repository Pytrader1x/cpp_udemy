#include <iostream>

using namespace std;

int main(){

    int rooms = 0;
    const int price_p_room = 10;

    cout << "Welcome to cleaner co:" << endl;
    cout << "How many rooms would you like cleaned" << endl;
    
    cin >> rooms;

    cout << "\nEstimate for carpet cleaning servuce" << endl;
    cout << "Number of rooms: "<<  rooms << endl;
    cout << "Price per room: $" << price_p_room << endl;
    cout << "Total cost: $" << rooms * price_p_room << endl;



    return 0;
}