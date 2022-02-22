#include <iostream>
#include <time.h>

using namespace std;

int main(){

    int rooms = 0;
    const double price_p_room = 30;
    const float tax_rate = 0.06;

    cout << "Welcome to cleaner co:" << endl;
    cout << "How many rooms would you like cleaned" << endl;
    
    cin >> rooms;
    clock_t tStart = clock();
    cout << "\nEstimate for carpet cleaning servuce" << endl;
    cout << "Number of rooms: "<<  rooms << endl;
    cout << "Price per room: $" << price_p_room << endl;
    cout << "Gross cost including tax: $" << (rooms * price_p_room)*(1+tax_rate) << endl;
    cout << "Total cost net of tax: $" << rooms * price_p_room << endl;
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);


    return 0;
}