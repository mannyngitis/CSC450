#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void appendToFile(const std::string& filename) {
    std::ofstream outFile;

    // Open file in append mode
    outFile.open(filename, std::ios_base::app);
    if (!outFile) {
        std::cerr << "Unable to open file for appending" << std::endl;
        exit(1);
    }

    std::string userInput;
    std::cout << "Enter the text you want to append to the file: ";
    std::getline(std::cin, userInput);

    // Append user input to the file
    outFile << userInput << std::endl;

    outFile.close();
    std::cout << "Data appended successfully." << std::endl;
}

void reverseFileContent(const std::string& inputFilename, const std::string& outputFilename) {
    std::ifstream inFile(inputFilename);
    if (!inFile) {
        std::cerr << "Unable to open input file" << std::endl;
        exit(1);
    }

    std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();

    // Reverse the content
    std::reverse(content.begin(), content.end());

    std::ofstream outFile(outputFilename);
    if (!outFile) {
        std::cerr << "Unable to open output file" << std::endl;
        exit(1);
    }

    // Write the reversed content to the output file
    outFile << content;

    outFile.close();
    std::cout << "File reversed and saved to " << outputFilename << std::endl;
}

int main() {
    std::string inputFilename = "CSC450_CT5_mod5.txt";
    std::string outputFilename = "CSC450-mod5-reverse.txt";

    appendToFile(inputFilename);
    reverseFileContent(inputFilename, outputFilename);

    return 0;
}
