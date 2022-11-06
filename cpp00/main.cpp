#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    Contact ph;
    std::string inp;
	PhoneBook ss;
    std::cout << "-_- : ➜ ";
    while (1)
    {
		if (!std::getline(std::cin, inp))
			break ;
		if (inp.empty())
			std::cout << "error line is empty \n";
        if (inp == "ADD" || inp == "EXIT"||  inp == "SEARCH")
		{
            std::cout << "first name " << std::endl;
            	ph.setName(inp);
            std::cout << " your type " << std::endl;
            	ph.setType(inp);
            std::cout << "your speed " << std::endl;
            	ph.setSpeed(inp);
        }
        if (inp == "SEARCH")
        {
			std::cout << "0\33[0;32m ------- __ -------" << std::endl;
			std::cout << ph.getName() << std::endl;
        }
    }
}