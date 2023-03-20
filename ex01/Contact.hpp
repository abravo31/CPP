#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{
    
    public:
    
    //Contructor & Destructor
        Contact();

    //Getters

    std::string getName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    //Setters

    void setName(std::string name);
    void setLastName(std::string lname);
    void setNickName(std::string nname);
    void setPhoneNumber(std::string numb);
    void setDarkestSecret(std::string secret);

    private:

    std::string     _Name;
    std::string _LastName;
    std::string _NickName;
    std::string _PhoneNumber;
    std::string _DarkestSecret;
};

#endif