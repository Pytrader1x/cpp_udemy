// Created on Will's iPad.

#include <iostream>
#include <vector>
using namespace std;

class Move{

    private:
        int *data;
    public:
        void set_data_value(int d){*data=d;}
        int get_data_value() {return *data;}

        //constructor
        Move(int d);
        //copy constructor
        Move(const Move &source);
        //Move constructor
        Move(Move &&source) noexcept;
        //Desctructor
        ~Move();
};       

Move::Move(int d){
    data = new int;
    *data = d;
    cout << "Memory: " << data;
    cout << "\nConstructor for: " << d << endl;

}
//Copy ctrct
Move::Move(const Move &source)
    :Move(*source.data){
        cout << "Copy constructor deep copy for:" << *data << endl;
    }

Move::Move(Move &&source)noexcept
    :data(source.data){
        source.data = nullptr;
        cout << "Memory: " << data;
        cout << "\nMove constructor, moving resource"<< *data << endl;
        cout << "Memory nullptr: " << &source.data << endl;
    }

Move::~Move(){
    if(data != nullptr){
        cout << "Destructor freeing data for:" << *data << endl;
        cout << "Destructor for memory address: " << data << endl;

    }else{
        cout << "Destructor freeing data"<< endl;
        cout << "Destructor for memory address: " << data << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;
    vec.push_back(Move(10));
    vec.pop_back();
    return 0;
}