#include <iostream>

int main(){

//Beginner programs :

//Print numbers from 1 to N
int n;
std::cout << "Enter n : ";
std::cin >> n;

for(int i = 1; i <= n; i++){
     std::cout << i << " ";
}


// Sum of first N numbers
int num , sum = 0;
std::cout << "Enter number of terms : ";
std::cin >> num;

for(int i = 0; i <= num; i++){
        sum += i;
}

std::cout << sum ;  


// Check even/odd
int value;
std::cout <<"Enter your value : ";
std::cin >> value;
 
if(value % 2 == 0){
   std::cout << "Even number.";
}
else{
    std::cout << "Odd number.";
}     





    return 0;
}


