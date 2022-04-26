// Created on Will's iPad.

#include <iostream>
#include <vector>
using namespace std;

class Deep
{   
    private:
        int *data;
    
    public:
        void set_data_value(int d){*data = d;}
        int get_data_value(){return *data;}

        //constructor
        Deep(int d);

        //copy constructor
        Deep(const Deep &source);

        // Destructor
        ~Deep();


    
}; // end class declaration


Deep::Deep(int d){

    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    :Deep(*source.data){
        // we use *source.data rather than
        // source.data so we take the
        //  data as value rather than via pointer

        // cout << "Copy constructor - Deep copy " << data << endl;

    }

Deep::~Deep(){
    delete data;
    cout << "Destructing - freeing data" <<endl;
}

void display_deep(Deep s){
    cout << s.get_data_value() << endl;
}

int main() {

    Deep obj1(100);
    
    Deep obj2(obj1);
    obj2.set_data_value(1000);
    display_deep(obj1);
    display_deep(obj2);
    return 0;
}