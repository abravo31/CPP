/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:14:25 by abravo            #+#    #+#             */
/*   Updated: 2023/03/24 19:14:27 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->index = 0;
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

void	PhoneBook::addContact(){
	this->index %= 8;
	this->_contacts[this->index].initContact();
	this->index++;
	return ;
}

void	PhoneBook::searchContact() const{
	int	i;
	std::string	tmp;

    i = 0;
    if (this->_contacts[0].checkInit())
		std::cout << "\033[31mPlease add at least one contact before searching.\033[0m" << std::endl;

	else
	{
		std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	    std::cout << "│" << std::setw(10) << std::right << "Index";
	    std::cout << "│" << std::setw(10) << std::right << "First name";
	    std::cout << "│" << std::setw(10) << std::right << "Last name";
	    std::cout << "│" << std::setw(10) << std::right << "Nickname" << "│" << std::endl;
	    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		while (i < 8 && !this->_contacts[i].checkInit()){
			this->_contacts[i].displaySearch(i);
			i++;
		}
        std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
		std::cout << "Please enter an index for relevant information: " << std::endl;
		std::getline(std::cin, tmp);
		if (tmp[0] > '0' && tmp[0] < '8' && !tmp[1])
		{
			i = atoi(tmp.c_str());
			if (i >= 1 && i <= 8)
				this->_contacts[i - 1].displayContact();
		}
		else
			std::cout << "Index number is incorrect. can't show you anything interesting..." << std::endl;
	}
	return ;
}

