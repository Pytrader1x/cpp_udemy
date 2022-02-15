#include <iostream>
#include <vector>
#include <iomanip>// to round data
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

  int scores1[] {10, 20, 30};

  for(auto score: scores1){
      cout << score << endl;
  }

  vector<double> temperatures {87.9, 77.9, 80.0, 72.5};

  average_temp = 0;
  double total{};

  for(auto temp: temperatures){
      total+=temp;

  }

  if(temperatures.size()!=0){
      average_temp = total / temperatures.size(); // to round data
      cout << fixed << setprecision(1);
      cout << average_temp;
      cout <<endl;
  }

  for(auto val: {1,2,3,4,5}){
     cout << val << endl; 
  }

  for(auto c: "This is a test"){
      if (c!=' '){
          cout << c;
      }
      else if (c==' '){
          cout << "\t";
      }
      
  }









}