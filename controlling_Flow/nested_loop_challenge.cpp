#include <vector>
#include <iostream>
using namespace std;


int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{};
    
    
    for (size_t i=0; i< vec.size(); ++i)
       for (size_t j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);
    
     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main(){


    vector<int> vec {1, 2, 3};
    int output = calculate_pairs(vec);
    cout << output<< endl;

}