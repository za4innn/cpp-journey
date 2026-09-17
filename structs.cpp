#include <iostream>

struct student{
    std::string name;
    int age;
    bool enrolled = true;
};

int main(){

//Structures (also called structs) are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.
// Unlike an array, a structure can contain many different data types: int, string, bool, etc.

student student1;
student1.name = "Ali";
student1.age = 23;
student1.enrolled;

std::cout << student1.name << "\n";
std::cout << student1.age << "\n";
std::cout << student1.enrolled << "\n";


student student2;
student2.name = "Sara";
student2.age = 22;
student2.enrolled;


std::cout << student2.name << "\n";
std::cout << student2.age << "\n";
std::cout << student2.enrolled << "\n";


    return 0;
}