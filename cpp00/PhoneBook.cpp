#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->cont_contact = 0;
}

void PhoneBook::addcontact(std::string name ,std::string type ,std::string speed)
{
    static int i;
    Contact contacts(name, type, speed);
        this->contact[i++] = contacts;
    if(this->cont_contact != 8)
        this->cont_contact = i;
    if(i == 8)
        i = 0;
}
