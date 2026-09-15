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

    

    //memory management using new and delete keyword 
    int* ptr = new int;
    *ptr = 45;
    std::cout << *ptr <<"\n";

    delete ptr;
    ptr = nullptr;


     // dynamic memory = Memory that is allocated after the program 
    //                  is already compiled and running.
    //                  'Use' the new operator to allocate memory 
    //                  in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need.Makes our program more flexible 
    //                  especially when accepting user input.



    char *pGrades = nullptr;
    int size;

    std::cout << "Enter number of grades : ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter Grade #" << i + 1 << " : ";
        std::cin >> pGrades[i];

    }


    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";

    }

    delete[] pGrades;


    //recurssion in function 
    //Tomorrow we will practice it

    return 0;
}
