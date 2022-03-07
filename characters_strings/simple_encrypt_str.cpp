
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    
   string alphabet = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
   vector<char> char_vector;
   

   for (char i:alphabet){
       if (i!=' '){
           char_vector.push_back(i);

       }
       cout << i << endl;
   }
   

   for(char i:char_vector){
       cout << i << endl;
       
   }

   // if a in vector then go to a + 3
   // if y then + 3 = beyond alphabet end, so we take - 3

   string entered_word="";
   cout << "Enter a word" << endl;
   entered_word = "Hello";
   string lower_entered_word = "";

   // convert string to back to lower case
    std::for_each(entered_word.begin(), entered_word.end(), [](char & c) {
        c = ::tolower(c);   
    });
    std::cout << "In Lower Case : " << entered_word << std::endl;

  
   
   
   for(char i_char: entered_word){

       vector<char>::iterator iterator_char = std::find(char_vector.begin(), char_vector.end(), i_char);
       
       if(iterator_char != char_vector.end()){
        int index = iterator_char - char_vector.begin();
        if(index <=3){

            cout << char_vector[index-1] << std::endl;

        }else{
            cout << char_vector[index+1] << std::endl;
        }
        // cout << i_char << " is index: " << index << endl;      
        }
       
   
   }



   


}