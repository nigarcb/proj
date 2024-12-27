#include <iostream>
#include "library/library.h"

int main() {
    std::string text;
    std::string number;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the number: ";
    std::getline(std::cin, number);

    if (find_number_in_text(text, number)) {
        std::cout << "The number was found in the text!" << std::endl;
    } else {
        std::cout << "The number was not found in the text." << std::endl;
    }

    return 0;
}
