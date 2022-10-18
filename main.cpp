#include <iostream>

class Motor
{
    private:
        std::string name;
        std::string tybe;
        std::string speed;

    public:
        void set_moto()
        {
            std::cout << "enter your  first name   : ";
            std::getline(std::cin, this->name);
            std::cout << "enter your  type   : ";
            std::getline(std::cin, this->tybe);
            std::cout << "enter your  speed   : ";
            std::getline(std::cin, this->speed);
        }
        void get_moto()
        {

            std::cout << "----------My Motorcycle, My Data-------------" << std::endl;
            std::cout << "your  first name   : ";
            std::cout << this->name << std::endl;
            std::cout << "your  type   : ";
            std::cout << this->tybe << std::endl;
            std::cout << "your  speed   : ";
            std::cout << this->speed << std::endl;
            std::cout << "--------------------------------------------" << std::endl;
        }
};

int main(int ac, char **av)
{
    (void)av;
    Motor c_lahir7am;
    std::string inp;
    while (1)
    {
        std::cout << "➜ ";
        std::getline(std::cin, inp);
        if (inp.empty())
        {
            std::cout << "error: lin is empty " << std::endl;
        }
        
        if (inp.compare("ADD") == 0|| inp.compare("add") == 0)
        {
            c_lahir7am.set_moto();
        }
        if (inp.compare("SEARCH") == 0 || inp.compare("search") == 0)
        {
            c_lahir7am.get_moto();
        }
        if (inp.compare("EXIT") == 0 || inp.compare("exit") == 0)
        {
            exit(0);
        }
    }
    return (0);
}