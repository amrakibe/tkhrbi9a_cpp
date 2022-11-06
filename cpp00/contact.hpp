
#include <iostream>
#pragma once

class Contact{
    private:
    std::string name;
    std::string type;
    std::string speed;
    std::string arr;
    public:
        Contact();
        Contact(std::string name, std::string type , std::string speed); // construcetr
        void setName(std::string name);
        void setType(std::string type);
        void setSpeed(std::string speed);
        std::string getName();
        std::string getType();
        std::string getSpeed();
};