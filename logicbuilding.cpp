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


// Find largest of 3 numbers
int a , b , c;
std ::cout << "Enter three numbers : ";
std::cin >> a >> b >> c;

if(a > b && a > c){
    std::cout << a << " is largest number.";
}
else if(b > c && b > a){
    std::cout << b << " is largest number.";
}
else{
    std::cout << c << " is largest number.";
}     


// Reverse a number
int n , reverse = 0;
std::cout << "Enter any number : ";
std::cin >> n;

while( n > 0){
    int digit;
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;
}

std::cout << "reversed number : " << reverse;


// Count digits
std::string number;
std::cout << "Enter your number : ";
std::cin >> number;

int count = number.length();
std::cout << "Total number : " << count; 


int number1;
int count = 0;

std::cout << "Enter your number: ";
std::cin >> number1;

while (number1 != 0) {
    number1 = number1 / 10;
    count++;
}

std::cout << "Total digits: " << counting;   


// Sum of digits
int value;
int sum = 0;

std::cout << "Enter your number : ";
std::cin >> value;

while(value > 0){
    sum += value % 10;
    value /= 10;
}
std::cout << "Sum of digits : " << sum;     

     

    return 0;
}


