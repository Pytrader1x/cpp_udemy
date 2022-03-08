
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

double num(){

    double num{};
    cout << "Enter a number";
    cin >> num;
    
    double sqrt_num = sqrt(num);
    double cosine_num = cos(num);
    double sine_num = sin(num);
    double cubed_root_num = cbrt(num);
    double ceil_num = ceil(num);
    double floor_num = floor(num);
    double round_num = round(num);


    cout << " The square root of the number "<< sqrt_num << endl;
    cout << "The cosine_num of the number " << cosine_num<< endl;
    cout << "The sine_num of the number " << sine_num << endl;
    cout << "The round of the number "<< round_num << endl;
    cout << "The ceil of the number "<< ceil_num << endl;
    cout << "The cubed_root_num of the number " << cubed_root_num<< endl;

    

    return cubed_root_num;
}

int main() {

    num();
    
  



  return 0;

}
   


