#include <iostream>
#include <vector>
using namespace std;

int main(){ 

   int width{}, height{}, length{};
   const int max_dim{100};
   double tier1_surcharge{0.10};
   double tier2_surcharge{0.25};
    
   const int tier1_thresh{100};//vol
   const int tier2_thresh{500};//vol
   const int base_cost{10};

   int packge_volume{};
   cout << "Enter width, heigh & length: ";

   cin >> width >> height >>length;

   cout << width << "x" << height << "x"<< length  << endl;

   if(length >max_dim || width > max_dim || height > max_dim){
       cout << "Package too large" << endl;
   }else{
       double package_cost{};
       packge_volume = length * width * height;
       cout << "Volume: " << packge_volume<<endl;
       package_cost = base_cost;
       if (packge_volume > tier2_thresh){
           package_cost += package_cost * tier2_surcharge;
           cout << "adding tier 2 surcharge";
       }else if(packge_volume > tier1_thresh){
           package_cost += package_cost * tier1_surcharge;
           cout << "adding tier 1 surcharge";


       }
       cout << "Total cost: " << package_cost << endl;

   }


    


}