#include "zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::setZombie(std::string name)
{
    this->name = name;
}

std::string Zombie::getZombie()
{
    return this->name;
}

void Zombie::annonce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": hello" << std::endl;
}