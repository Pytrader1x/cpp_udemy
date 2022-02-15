#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    
    
  // Looping, iteration
  int scores [] {100, 90, 97};

  for (auto score : scores){
      cout << score << endl;
  }

  vector<double> temps {87.2, 77.1, 80.0, 72.5};

  double average_temp {};
  double running_sum {};

  for(auto temp : temps){
      running_sum+=temp;
  }

  cout << running_sum<<endl;
  average_temp = running_sum/temps.size();
  cout << average_temp<< endl;

  for(auto c: "Frank"){
      cout << c << endl;
  }

  






}