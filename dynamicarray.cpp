#include <iostream>

int main(){

    int size = 0;
    int capacity;

    std::cout <<"Enter initial capacity : ";
    std::cin >> capacity;

    int* arr = new int[capacity];

    //Add elements
    int value;
    std::cout <<"Enter " <<capacity <<" element : ";
    
    for(int i = 0; i < capacity; i++){
        std::cin >> arr[i];
        size++;
    }

    //Add another element
    std::cout << "Enter an element to add : ";
    std::cin >> value;

    if(size == capacity){
       capacity *= 2;
    
    int* temp = new int[capacity];

    for(int i = 0; i < size; i++){
        temp[i] = arr[i];
    }

    delete[] arr;
    arr = temp;
}

    arr[size] = value;
    size++;


    // Display
    std::cout << "\nAfter adding:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Remove element by index
    int index;
    std::cout << "\n\nEnter index to remove: ";
    std::cin >> index;

    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    } else {
        std::cout << "Invalid index.\n";
    }

    // Display after removal
    std::cout << "After removal:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;
    arr = nullptr;




    //Created another dynamic array
    int length = 0;
    int space;

    std::cout <<"Enter initial space : ";
    std::cin >> space;

    int* arr2 = new int[space];

    //Add numbers
    int value1;
    std::cout << "Enter " << space << " elements : ";
    for(int i = 0; i < space; i++){
       std::cin >> arr2[i];
       length++;
    }

    //Add another elements
    std::cout << "Enter another element : ";
    std::cin >> value1;
    if(length == space){
        space *= 2;

        int* temporary = new int[space];

        for(int i = 0; i < length; i++){
            temporary[i] = arr2[i];
        }

        delete[] arr2;
        arr2 = temp;

    }

    arr2[length] = value1;
    length++;

    //Display result
    std::cout << "After adding : ";
    for(int i = 0; i < length; i++){
        std::cout << arr2[i] << " ";
    }

    //Removing through index
    int indexx;

    std::cout << "\nEnter an index to remove an element : ";
    std::cin >> indexx;

    if(index >= 0 && indexx < length ){
       for(int i = indexx; i < length - 1; i++){
          arr2[i] = arr2[i + 1];
       }
       length--;
    }
    else{
        std::cout <<"Invalid index";
    }

    //Display result after removal
    std::cout << "After removal : ";
    for(int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }

    //Free memory
    delete[] arr2;
    arr2 = nullptr;

    return 0;
}
