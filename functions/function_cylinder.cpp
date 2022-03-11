#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
 
#include <cmath>
using namespace std;


double calc_area(double radius){

    return M_PI*radius*radius;
}

double calc_volume(double area, double height){

    return area * height;
}


int main() {

    double radius{};
    double height{};
    cout << "What is the radius of the cylinder" << endl;
    cin >> radius;
    cout << "What is the height of the cylinder" << endl;
    cin >> height;

    double area = calc_area(radius);
    double volume = calc_volume(area, height);

    cout << "The area of the cylinder is : " << area << endl;
    cout << "The volume of the cylinder is : " << volume << endl;

   
}