#include <vector>
#include <iostream>
using namespace std;


int main(){


    vector<int> numbers {};
    char selection{};
    
    do{
        cout << "\nP - Print Numbers"<< endl;
        cout << "\nA - Add Numbers"<< endl;
        cout << "\nM - Print Mean"<< endl;
        cout << "\nS - Print smallest Numbers"<< endl;
        cout << "\nL - Print Largest Numbers"<< endl;
        cout << "\nQ - QUIT"<< endl;
        cout << "Enter Your choice: "<< endl;
        cin >> selection;

        selection = toupper(selection);
        cout << "Upper:" <<selection<<endl;
        

        if(selection =='P'){
        
            for(auto i:numbers){
                cout << i<<endl;
            };
        
        } else if(selection =='A'){
            int total = 0;
            for(auto i:numbers){
                total+=i;
                
            };
            cout << "Total: " << total<<endl;
        }else if(selection =='M'){
            double total = 0;
            double count = 0;
            for(auto i:numbers){
                total+=i; 
                count++;

                
            };

            cout << "Mean: " << total/count <<endl;
        }else if(selection =='S'){

            if (numbers.size() == 0){
                cout << "Empty array: " <<endl;
                cin >> numbers[0];
                
            }
            
            double total = 0;
            int smallest = numbers[0];
            for(auto i:numbers){
                if(i<smallest){
                    smallest=i;
                } 
               

                
            };

            cout << "Smallest: " << smallest <<endl;
        }else if(selection =='L'){
            
            double total = 0;
            int largest = 0;
            for(auto i:numbers){
                if(i>largest){
                    largest=i;
                } 
               

                
            };

            cout << "largest:  " << largest <<endl;
        }

    }while(selection !='Q');

    

    cout << "\nYou quit: " << selection << endl;


    

}
