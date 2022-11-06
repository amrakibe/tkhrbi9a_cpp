#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void annonce();
        void setZombie(std::string name);
        std::string getZombie();
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );