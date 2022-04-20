// Created on Will's iPad.

#include <iostream>
#include <vector>
using namespace std;

class Vector_Class
{
    public:
        string vector_name;
        int n_dim {};
        int length {};

        vector<double> vector_new {};
        void dispay();
        void modify_vector(double threashold, double replacement);
        void add_n_elements_vector(int n_elements);
};   

void Vector_Class::modify_vector(double threshold, double replacement){

    size_t vec_size = vector_new.size();
    cout << "Vector modify size " <<vec_size <<endl;
    vector<double> *ptr = &vector_new;//{nullptr};
    // ptr = &vector_new;
    
    for(double i:*ptr){
        cout << "Vec pointer " << i << endl;

        if(i < threshold){
            i = replacement;
            cout << "Now: " << i << endl;
        }
           
    }
    

}


void Vector_Class::add_n_elements_vector(int n_elements){


    
    cout << "Vector add " <<n_elements << " elements" <<endl;

    for(int i=0;i<n_elements;i++){

        vector_new.push_back(0);
        
        
        

    }    
        
    


}

void Vector_Class::dispay(){

    int i = 0;
    for(auto ele:vector_new){

        cout << ele << " - ";
        if(i>2){
         cout <<endl;   
         i = 0;
        }
        else{
            i++;
        }
        
    }
}


int main() {
    cout<< "Init class" <<endl;
    Vector_Class Vector_1;
    Vector_1.vector_name = "Vec1";
    cout << Vector_1.vector_name << endl;

    vector<double> vec_new {1.1, 2.3, 5.5,6.66,77.88, 88.567};
    Vector_1.vector_new = vec_new;


    
    cout << "\nVec pos 0: " <<Vector_1.vector_new[0] << endl;

                            //threshold replacement
    // Vector_1.modify_vector(78.0,4.55);

    Vector_1.add_n_elements_vector(2);
    Vector_1.modify_vector(78.0,4.55);
    Vector_1.dispay();
    
    return 0;
}