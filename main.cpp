#include <iostream>
#include <string>

int main() {
    std::string string1, string2, result;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, string1);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, string2);

        result = string1 + " " + string2;

        std::cout << "Concatenated string: " << result << std::endl << std::endl;
    }

    return 0;
}