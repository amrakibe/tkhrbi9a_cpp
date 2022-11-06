#include "contact.hpp"

Contact::Contact()
{
    this->name = "";
    this->type = "";
    this->speed = "";
}
Contact::Contact(std::string name, std::string type, std::string speed)
{
    this->name = name;
    this->type = type;
    this->speed = speed;
}

void Contact::setName(std::string name)
{
    this->name = name;
    std::getline(std::cin , name);
}

std::string Contact::getName()
{
    return this->name;
}

void Contact::setSpeed(std::string speed)
{
    this->speed = speed;
   std::getline(std::cin ,  speed);
}

std::string Contact::getSpeed()
{
    return this->speed;
}

void Contact::setType(std::string type)
{
    this->type = type;
    std::getline(std::cin , type);
}

std::string Contact::getType()
{
    return this->type;
}