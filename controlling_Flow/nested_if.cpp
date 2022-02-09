#include <iostream>
#include <vector>
using namespace std;

int main(){ 

   int score {0};
//    if(score > 90){
//        if(score>95)
//         cout << "> 95" << endl;
//        else   
//         cout << "Smaller 95"<< endl;
//    }

  
   cout << "\nEnter score 1 - 100" << endl;
   cin >> score;
   char letter_grade {};

   if(score >= 0 && score <= 100){

       if(score > 90){

           letter_grade = 'A';

       }
       else if(score > 80){
           letter_grade = 'B';
       }
       else if(score > 70){
           letter_grade = 'C';
       }
       else if(score > 60){
           letter_grade = 'D';
       }
       else{
           letter_grade = 'F';
       }

       cout << letter_grade << endl;
       if(letter_grade=='F'){
           cout << "Sorry you must repeat this class" << endl;
       }

   }
   else{
       cout << "incorrect num" << endl;
   }


    


}