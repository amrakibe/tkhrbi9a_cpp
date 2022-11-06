#include "zombie.hpp"

int main()
{

	Zombie *zombie = new Zombie("aaa");
	zombie->annonce();
	randomChump("kiwalo");
	delete zombie;
}