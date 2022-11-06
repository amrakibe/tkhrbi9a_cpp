#include <iostream>
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int cont_contact;
    public:
        PhoneBook();
        void addcontact(std::string name, std::string type, std::string speed);
};