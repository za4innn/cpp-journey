#include <iostream>
using namespace std;


void rectangle(double length , double width){
//     double area;
//     area = length * width;
//     cout << area;
// }

// double circle(double radius){
//     const double PI = 3.14;
//     double area = PI * (radius * radius);
//     cout << area;
// }

// double triangle(double base , double height){
//     double area = 0.5 * base * height;
//     cout << area;

// }


int main (){

    //print numbers from 1 to N
    // int n;

    // cout <<"Enter numbers to print : ";
    // cin >> n;

    // for(int i=0;i<=n;i++){
    //     cout << i << endl;
    // }

    

    //sum of first n numbers
    // int num, sum = 0;
    // cout << "Enter numbers to print : ";
    // cin >> num;

    // for(int i=0;i<=num;i++){
    //     sum+=i;
    // }
    // cout << "Sum : " << sum ;



    //check even/odd
    // int val;
    // cout <<"Enter your number : ";
    // cin >>val;

    // if(val%2==0){
    //    cout << "Even";
    // }
    // else if(val%2==1){
    //     cout <<"Odd";
    // }


    //find largest number between a,b,c
    // int a,b,c;
    // cout<<"Enter number a,b,c : ";
    // cin >>a>>b>>c;

    // if(a > b && a > c){
    //     cout << a<<" is largest number.";
    // }
    // else if(b > a && b > c){
    //     cout << b<< " is largest number.";
    // }
    // else if(c > a && c > b){
    //     cout << c<<" is largest number.";
    // }



    
    //Reverse a number
    // int n , reverse = 0;
    // cout << "Enter a number : ";
    // cin >> n;

    
    // while (n > 0)
    // {
    //     int div;
    //     div = (n % 10) ;
    //     reverse = reverse * 10 + div;
    //     n /= 10;
    // }
    // cout << "Reversed number : "<< reverse;
     

    
    //sum of digits
    // int n;
    // int sum = 0;

    // cout << "Enter your number : ";
    // cin >> n;

    // while(n > 0){
    //     sum += n % 10;
    //     n /= 10;
    // }

    // cout << "Sum of digits : "<< sum;



    //positive / negative / zero
    // int value;
    // cout <<"Enter your number : ";
    // cin >> value;

    // if(value > 0){
    //     cout <<"Positive number.";
    // }
    // else if(value < 0){
    //     cout << "Negative number.";
    // }
    // else{
    //     cout <<"Zero.";
    // }


    //check palindrome number
    // int num;
    // int reverse = 0;

    // cout <<"Enter your number : ";
    // cin >> num;

    // int original = num;

    // while(num > 0){
    //     int digit;
    //     digit = num % 10;
    //     reverse = reverse * 10 + digit;
    //     num /= 10;
    // }

    // if(original == reverse){
    //     cout << "Palindrome number.";
    // }
    // else{
    //     cout << "Not a palindrome number.";
    // }




    //check prime  numbers
    // 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
    // int prime;

    // cout <<"Enter your number : ";
    // cin >>prime;

    // if(prime <= 1){
    //     cout << "Not a prime number.";
    // }

    // if(prime == 2 || prime == 3 || prime == 5){
    //     cout << "Prime number.";
    // }
    // else if(prime % 2 == 0 || prime % 3 == 0 || prime % 5 == 0 || prime % 7 == 0){
    //     cout << "Not prime number.";
    // }
    // else{
    //     cout << "Prime numer.";
    // }



    //check prime number 
    //second method
    // int num;
    // cout << "Enter any number : ";
    // cin >> num;
    // bool isprime = true;

    // if(num <= 1){
    //     isprime = false;
    // }
    // else if(num == 2){
    //     isprime = true;
    // }

    // else{
    //     for (int i = 2; i < num; i++)
    //     {
    //         if(num % i == 0){
    //             isprime = false;
    //             break;
    //         }
            
    //     }
        
    // }

    // if(isprime){
    //     cout << "Prime number.";
    // }
    // else{
    //     cout << "Not a prime number.";
    // }



    //program for calculating area for different shapes
    // int option;
    // cout << "Select option to calculate area : " << endl;
    // cout << "1.Rectangle." << endl;
    // cout << "2.Circle." << endl;
    // cout << "3.Triangle." << endl;
    // cin >> option;

    // switch (option)
    // {
    // case 1:
    // double length , width;
    // cout << "Enter length of rectangle : ";
    // cin >> length;
    // cout << "Enter width of rectangle : ";
    // cin >> width;
    // rectangle(length , width);
        
    //     break;

    // case 2:
    // double radius;
    // cout << "Enter radius of circle : ";
    // cin >> radius;
    // circle(radius);
    //     break;

    return 0;
}
