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


// Check positive/negative/zero
int num1;
std::cout << "Enter your number : ";
std::cin >> num1;

if(num1 > 0){
    std::cout << "Positive number.";
}
else if(num1 < 0){
    std::cout << "Negative number.";
}
else{
    std::cout << "Zero.";
}     

     
// Simple calculator using switch
double numberone , numbertwo;
char operation;

std::cout << "Enter first number : ";
std::cin >> numberone;
std::cout << "Enter second number : ";
std::cin >> numbertwo;
std::cout << "Enter your operation(+ , - , * , /) : ";
std::cin >> operation;

switch (operation)
{
case '+':
    std::cout << "Addition : " << numberone + numbertwo;
    break;
case '-':
    std::cout << "Subtraction : " << numberone - numbertwo;
    break;
case '*':
    std::cout << "Multiplication : " << numberone * numbertwo;
    break;
case '/':
    std::cout << "Division : " << numberone / numbertwo;
    break;

default:
    std::cout << "Inavlid operation!";
    break;
}


// Check palindrome number
int numm;
int reversed = 0;

std::cout << "Enter your number : ";
std::cin >> numm;

int original = numm;

while(numm > 0){
    int digitt;
    digitt = numm % 10;
    reversed = reversed * 10 + digitt;
    numm /= 10;
}
std::cout << "Reversed number : " << reversed <<"\n";

if(reversed == original){
    std::cout << "Palindrome number."; 
}
else{
    std::cout << "Not palindrome number.";
}     


// Check prime number
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97. 
int a;
std::cout << "Enter any number : ";
std::cin >> a;
bool isprime = true;

if(a <= 1){
    isprime = false;
}

else{
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            isprime = false;
            break;
        }
    }
}

if(isprime){
    std::cout << "Prime number.";
}
else{
    std::cout << "Not Prime number.";
}
     
     
    return 0;
}


