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

    return 0;
}