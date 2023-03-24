#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>


class Contact{
    
    public:
    
    //Contructor & Destructor
        Contact();
        ~Contact();

    //Getters

    void        initContact();
    bool        checkInit() const;

    //Setters
    void        printSearch(std::string data) const;
    void        displaySearch(int i) const;
    void	    displayContact() const;

    private:

    std::string     _Name;
    std::string     _LastName;
    std::string     _NickName;
    std::string     _PhoneNumber;
    std::string     _DarkestSecret;
    bool            _Init;
};

#endif