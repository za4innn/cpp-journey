#include <iostream>


int main(){
    
    //pointers = variable that stores a memory address of
    //           another variable
    //           sometimes it's easier to work with an address

    // & address of operator
    // * dereference operator

    std::string name = "Bro";

    std::string *pName = &name;

    std::cout << *pName <<'\n';
    std::cout << pName <<'\n';

    //array example
    std::string pizzas[] = {"pizza1" , "pizza2" , "pizza3" , "pizza4" , "pizza5"};

    std::string *pPizzas = pizzas; // array don't need & operator as it is already an address

    std::cout << *pPizzas <<'\n';
    std::cout << pPizzas <<'\n';

    


    return 0;
}
