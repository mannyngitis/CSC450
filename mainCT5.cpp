#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "CSC450_CT5_mod5.txt"; // Use relative path
    std::ofstream outFile;

    // Open file in append mode
    outFile.open(filename, std::ios_base::app);
    if (!outFile) {
        std::cerr << "Unable to open file";
        return 1;
    }

    std::string userInput;
    std::cout << "Enter the text you want to append to the file: ";
    std::getline(std::cin, userInput);

    // Append user input to the file
    outFile << userInput << std::endl;

    outFile.close();
    std::cout << "Data appended successfully." << std::endl;

    return 0;
}
