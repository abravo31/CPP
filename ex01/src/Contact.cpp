#include "PhoneBook.hpp"

//Constructor
Contact::Contact(){
    this->_Init = true;
    return;
}

Contact::~Contact(){
    return;
}

bool	Contact::checkInit() const{
	return (this->_Init);
}

void	Contact::initContact(){

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
	this->_Init = false;
	return;
}

void	Contact::printSearch(std::string data) const{
	if(data.length() > 10)
		std::cout << std::setw(10) << data.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') <<std::setw(10) << data << "|";
	return ;
}

void	Contact::displaySearch(int i) const{
	std::cout << "|         " << i + 1 << "|";
	this->printSearch(this->_Name);
	this->printSearch(this->_LastName);
	this->printSearch(this->_NickName);
	std::cout << std::endl;
	return ;
}

void	Contact::displayContact() const{
	std::cout << "First Name	:	" << this->_Name << std::endl;
	std::cout << "Last Name	:	" << this->_LastName << std::endl;
	std::cout << "Nickname	:	" << this->_NickName << std::endl;
	std::cout << "Phone No.	:	" << this->_PhoneNumber << std::endl;
	std::cout << "Darkest Secret	:	" << this->_DarkestSecret << std::endl;
	return ;
}
