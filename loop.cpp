#include <iostream>
#include <time.h>
using namespace std;

int addition (int a, int b)
    {
        int r;
        r=a+b;
        return r;
    }

int main(){
    clock_t tStart = clock();
    double total = 0;
    
    for (int i = 0; i <= 10000; i = i + 2) {

        total = addition(i, 3);
        // cout << total << "\n";
    }

    printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

}