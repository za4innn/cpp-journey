#include <iostream>
using namespace std;

int main(){

    //electricity bill program
    string name , id;
    int consumerChoice , units;
    char exit;

    do{
        cout << "======Electricity Bill=====\n";
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your units : ";
        cin >> units;
        cout << "Enter your choice : \n";
        cout << "1. Residential\n";
        cout << "2. Commercial\n";
        cout << "3. Industrial\n";
        cin >> consumerChoice;

        double price = 0;
        double bill = 0;
        switch (consumerChoice)
        {
        case 1:
            price = 5;
            if(units <= 200){
            bill = units * price;
        }
        else{
            bill = units * price * 2;
        }
            break;
        case 2:
            price = 10;
            if(units <= 200){
            bill = units * price;
        }
            else if(units >= 300){
            bill = units * price * 2;
        }
            break;
        case 3:
            price = 15;
            if(units <= 200){
            bill = units * price;
        }
            else if(units >= 400){
            bill = units * price * 4;
        }
            break;
        
        default:
            cout << "Invalid choice!";
            break;
        }

        double discount = 0;
        if(consumerChoice == 1){
            if(units <= 200){
              discount = bill * 0.10;
            }
            else{
                discount = bill * 0.15;
            }
        }
        else if(consumerChoice == 2){
            if(units <= 300){
              discount = bill * 0.5;
            }
            else{
                discount = bill * 0.10;
            }
        }
        else if(consumerChoice == 3){
            if(units <= 500){
              discount = bill * 0.6;
            }
            else{
                discount = bill * 0.8;
            }
        }

        double finalbill = bill - discount;
        cout << "\n----------Bill----------\n";
        cout << "\nCustomer name : " << name;
        cout << "\nCustomer id : " << id;
        cout << "\nCustomer Bill : Rs " << finalbill;
        cout << "\nCustomer discount : Rs " << discount;
        
    
    cout << "\nDo you want to calculate another bill?(Y/N)";
    cin >> exit;

    }while(exit == 'Y' || exit == 'y');



    return 0;
}