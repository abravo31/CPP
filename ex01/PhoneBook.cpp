
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    return ;
}

PhoneBook::~PhoneBook(){
    return ;
}

void    PhoneBook::Welcome(void) const {
    std::cout << std::endl;
    std::cout << "📞 Welcome to the PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "--------TYPE ON THE KEYBARD--------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << std::endl;
}