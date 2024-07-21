#include <iostream>

int main() {
    int int1, int2, int3;
    int *ptr1, *ptr2, *ptr3;

    std::cout << "Enter the first integer: ";
    std::cin >> int1;
    ptr1 = new int;  // Allocate memory
    *ptr1 = int1;    // Store value

    std::cout << "Enter the second integer: ";
    std::cin >> int2;
    ptr2 = new int;  // Allocate memory
    *ptr2 = int2;    // Store value

    std::cout << "Enter the third integer: ";
    std::cin >> int3;
    ptr3 = new int;  // Allocate memory
    *ptr3 = int3;    // Store value

    // Display the contents of the variables
    std::cout << "Values stored in variables: " << std::endl;
    std::cout << "int1: " << int1 << std::endl;
    std::cout << "int2: " << int2 << std::endl;
    std::cout << "int3: " << int3 << std::endl;

    // Display the values pointed by pointers
    std::cout << "Values stored in pointers: " << std::endl;
    std::cout << "*ptr1: " << *ptr1 << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;

    // Free the allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}