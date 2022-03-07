#include <vector>
#include <iostream>
#include <cctype>
using namespace std;


int main(){

    /*
    isalpha - True if c is a letter
    isalnum - True if c is a letter or digit
    isdigit - True if c is a digit

    islower - True if c is a lowercase letter
    isprint(c) - True if c is a printable character
    ispunct(c) - True if c is a punctuation character
    isupper(c) - True if c is a uppercase character
    isspace(c) - True if c is a whitespace

    tolower(c) - returns lowercase
    toupper(c) - reutnrs uppercase
    */

   // c style strings , continguous in memory
   // accessed as an array , inludes null termination char \0

   // c style string is the old style

   //cpp string is better

   char first_name[20];
   char last_name[20];
   char full_name[50];
   char temp_name[50];

//    cout << "Please enter first name, last name";
//    cin >> first_name;
//    cin >> last_name;

//    cout << "Hello, " << first_name << " Your name has " << strlen(first_name) << " characters" << endl;
//    cout << " And your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;
//    strlen returns size_t unsigned int
    // strcpy(full_name, first_name); // copy string
    // strcat(full_name," ");
    // strcat(full_name,last_name);
    // cout << "Your full name is " << full_name << endl;
   
    cout << "Enter your full name";
    cin.getline(full_name, 50);
    cout << "your full name " << full_name << endl;

    cout << "================================================" << endl;

    strcpy(temp_name, full_name);
    if(strcmp(temp_name, first_name) == 0){
        cout << temp_name << " and " << full_name << " are the same"<< endl;
    }else{
        cout << temp_name << " and " << full_name << " are not the same"<< endl;

    }
        
}
