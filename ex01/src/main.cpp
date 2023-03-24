/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:14:42 by abravo            #+#    #+#             */
/*   Updated: 2023/03/24 19:14:44 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
    PhoneBook book;
    std::string input = "";

    book.Welcome();
    std::getline(std::cin, input, '\n');
    while (input != "EXIT") {
        if (input == "ADD"){
            std::cout << "Your choice is [ADD]" << std::endl;
            book.addContact();
        }
        else if (input == "SEARCH") {
            std::cout << "Your choice is [SEARCH]" << std::endl;
            //book.printContact();
            book.searchContact();
        }
        else
        {
            std::cout << "Please, read more carefully the three options that I gave you." << std::endl;
		    std::cout << "Let's try again..." << std::endl;
        }
        std::cout << "Choose a option: " << std::endl << "[ADD] [SEARCH] [EXIT]"  << std::endl;
		std::getline(std::cin, input, '\n');
    }
    return (0);
}