#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook{

    public:
    
    //Contructor & Destructor
        PhoneBook();
        ~PhoneBook();
    
    void addContact() const;
    void printContacts() const;

    // Setters
    void setContact() const;
    
    private:
    
    Contact _contacts[8];
    int index;
    int count;

};
#endif