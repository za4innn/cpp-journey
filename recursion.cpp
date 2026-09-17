#include <iostream>

//using auto keyword 
auto max(T x ,U y){
   return(x > y) ? x : y; 
}

void eat(int pizza);
void drink(int soda);
int factorial(int num);


int main(){

    
// recursion = a programming technique where a function invokes itself from within
//             break a complex concept into a repeatable single step

// (iterative vs recursive)

//  advantages      =   less code and is cleaner
//                      useful for sorting and searching algorithms
//  disadvantages   =   uses more memory
//                      slower

eat(20);
drink(10);
std::cout << factorial(5);

//function templates
std::cout << max(4 , 5.5) <<'\n';

    return 0;
}

void eat(int pizza){
    for(int i = 0; i < pizza; i++){
      std::cout << "You eat a pizza!\n";    //iterative 
    }
}

void drink(int soda){
    if(soda > 0){
        std::cout << "You drink a soda can!\n";   //recursive
        drink(soda - 1);                   
    }
}

int factorial(int num){
    // int result = 1;
    // for(int i = 1; i <= num; i++){                 //iterative
    //     result = result * i;
    // }
    // return result;

    if(num > 1){
        return num * factorial(num -1);

    }
    else{
        return 1;
    }
}
