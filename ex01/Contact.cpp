#include "Contact.hpp"

//Constructor
Contact::Contact(){
    return;
}

//Getters

std::string Contact::getName() const{
    return this->_Name;
}

std::string Contact::getLastName() const{
    return this->_LastName;
}

std::string Contact::getNickName() const{
    return this->_NickName;
}

std::string Contact::getPhoneNumber() const{
    return this->_PhoneNumber;
}

std::string Contact::getDarkestSecret() const{
    return  this->_DarkestSecret;
}

//Setters

void Contact::setName(std::string name){
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