#include <vector>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){


    string s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the secret word to find: " << endl;
    cin >> word;

    size_t position = s1.find(word);
    if(position!=string::npos){
        cout << "Found " << word << " at position " << position << endl;
    }else{
        cout << "Sorry " << word << " not found " << endl;
    }

    cout << endl;


}
