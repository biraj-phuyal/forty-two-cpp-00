#include "phonebook.hpp"

int main(int args, char **argv)
{
    Phonebook phonebook;
    std::string command;

    while (1)
    {
        std::cout << std::endl << "Commands available: ADD, SEARCH or EXIT\n" << std::endl;
        std::cout << "Enter a command: ";
        
        std::getline(std::cin, command);
        if ((command.compare("EXIT") == 1) || std::cin.eof())
            return 0;
        
    }
}
