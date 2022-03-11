#include <iostream>
#include <cmath>

using namespace std;

double f_to_c(double fahrenheit);
double f_to_k(double fahrenheit);

void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    double celsius_temperature{0.0};
    celsius_temperature = f_to_c(fahrenheit_temperature);

    double kelvin_temperature{0.0};
    kelvin_temperature = f_to_k(fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double f_to_c(double fahrenheit_temperature){

    double celcius_temperature{};
    celcius_temperature = (5/9)*(fahrenheit_temperature-32);
    return celcius_temperature;
}

double f_to_k(double fahrenheit_temperature){

    double kelvin_temperature {};
    kelvin_temperature = (5/9)*(fahrenheit_temperature-32)+273;
    return kelvin_temperature;
}

int main() {

    
    temperature_conversion(32);
    



}
