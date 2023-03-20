#include "Contact.hpp"

//Constructor
Contact::Contact(){
    return;
}

Contact::~Contact(){
    return;
}

//Getters

std::string Contact::GetandSetContact() const{

    std::cout << "Please enter the first Name : " << std::endl;
    std::getline(std::cin, this->_Name);
    std::cout << "Please enter the Last name : " << std::endl;
    std::getline(std::cin, this->_LastName);
    std::cout << "Please enter the Nick : " << std::endl;
    std::getline(std::cin, this->_NickName);
    std::cout << "Please enter the Phone number : " << std::endl;
    std::getline(std::cin, this->_PhoneNumber);
    std::cout << "Can you tell me they DARKEST SECRET ? " << std::endl;
    std::getline(std::cin, this->_DarkestSecret);
}

//Setters

void Contact::setContact(std::string name){
    this->_Name = name;
    return ;
}

void Contact::setLastName(std::string lname){
    this->_LastName = lname;
    return ;
}

void Contact::setNickName(std::string nname){
    this->_NickName = nname;
    return ;
}

void Contact::setPhoneNumber(std::string numb){
    this->_PhoneNumber = numb;
    return ;
}

void Contact::setDarkestSecret(std::string secret){
    this->_DarkestSecret = secret;
    return ;
}