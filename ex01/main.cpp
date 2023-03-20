#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void) {
    PhoneBook book;
    std::string input = "";

    book.Welcome();
    std::getline(std::cin, input, '\n');
    while (input != EXIT) {
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0) {
            book.printContacts();
            book.search();
        }
        std::cout << "Please, read more carefully the three options that I gave you." << std::endl;
		std::cout << "Let's try again..." << std::endl;
    }
    return 0;
}