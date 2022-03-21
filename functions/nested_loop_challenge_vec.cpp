#include <vector>
#include <iostream>
using namespace std;

void displayu_menu();
char get_selection(char &selection);

void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &);
void handle_largest(const vector<int> &);
void handle_quit();
void handle_unkown();



double display_list(const vector<int> &v);
double calculate_mean(const vector<int> &);
int get_smallest(const vector<int> &);
int get_largest(const vector<int> &);


void display_menu(){
    cout << "Choose:"<<endl;
    cout<< "P print num"<<endl;
    cout<< "A Add num"<<endl;
    cout<< "M Mean num"<<endl;
    cout<< "S smallest num"<<endl;
    cout<< "L largest num"<<endl;
    cout<< "Q Quit"<<endl;
}


int main(){

    vector<int> numbers;

    char selection {};

    do{
        display_menu();
        get_selection(selection);

    }while(selection != 'Q');
    
    




    // vector<int> vec {1, 2, 3};
    // int output = calculate_pairs(vec);
    // cout << output<< endl;

}
char get_selection(char &selection){
    
    cin >> selection;
    selection = toupper(selection);
    cout<< "Choice: " << selection << endl;

}
