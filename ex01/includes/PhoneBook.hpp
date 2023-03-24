#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook{

    public:
    
    //Contructor & Destructor
        PhoneBook();
        ~PhoneBook();

    // Getters
    
    void    Welcome() const;
    void    addContact();

    // Setters

    void    searchContact() const;

    private:
    
    Contact _contacts[8];
    int index;

};
#endif