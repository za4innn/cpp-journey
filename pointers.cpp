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



    //null pointers
    
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    // & address operator
    int num = 69;
    
    std::cout << &num <<'\n'; //gives address of 69 from memory

    return 0;
}
