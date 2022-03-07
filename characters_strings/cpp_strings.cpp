#include <vector>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;


int main(){

    //cpp strings are dynamic at runtime
    // use #include <string> instead
    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {"Frank", 3};
    string s5 {s3, 0, 2};
    string s6 (3, 'X');
    cout<<s1<<s2<<s3<<s4<<s5<<s6<< endl;


    string part1 {"C++"};

    string part2 {"is a powerful"};

    string sentence = part1 + " " + part2 + " language"; 
    cout<<sentence<<endl;


    cout << sentence.substr(0,4) << endl; //        
    cout << sentence.find("language") << endl;

    cout << sentence.erase(0,5);

    cout << "\nLength of sentence: " << sentence.length() << endl;

    sentence.clear();
    cout << "\nLength of sentence after clearing: " << sentence.length() << endl;

    cout << "\nAfter clearing the sentence:  " <<sentence << endl;


    sentence += "Hello world";
    cout << sentence<< endl;

    //input
    string s10;
    cout << "Enter your name" << endl;
    cin >> s10; // only until first whitespace

    
    cout << s10 << endl;


    cout << "Enter your name" << endl;
    getline(cin, s10);
    cout << s10 << endl;

    cout << "Enter your name" << endl;
    getline(cin, s10, 'x');
    cout << s10 << endl;
    

}
