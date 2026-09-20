#include <iostream>

class icecream{
    public:
      std::string flavor;
      std::string color;
      int weight;
    
};

int main(){


// object = A collection of attributes and methods
//          They can have characteristics and could peform actions
//          Can be used to mimic real world items (ex. Phone, Book)
//          Created from a class which acts as a "blue-print"
  

icecream icecream1;

icecream1.flavor = "Vanilla";
icecream1.color =  "White";
icecream1.weight = 200;


std::cout << icecream1.flavor << '\n';
std::cout << icecream1.color << '\n';
std::cout << icecream1.weight << "g\n";


    return 0;
}