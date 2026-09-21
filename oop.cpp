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


//constructors
car car1("Ford", 2023, "Red");
car car2("Bentley", 2022, "White");
car car3("Nissan", 2024, "Blue");


std::cout << car1.name << '\n';
std::cout << car1.year << '\n';
std::cout << car1.color << '\n';


std::cout << car2.name << '\n';
std::cout << car2.year << '\n';
std::cout << car2.color << '\n';


std::cout << car3.name << '\n';
std::cout << car3.year << '\n';
std::cout << car3.color << '\n';    


    return 0;
}
