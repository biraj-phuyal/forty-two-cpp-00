#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;

    while (1)
    {
        std::cout << std::endl << "Commands that works: ADD, SEARCH or EXIT\n" << std::endl;
        std::cout << "Enter a command: ";
        
        std::getline(std::cin, command);
        if ((!command.compare("EXIT"))|| std::cin.eof())
            return 0;
        else if (!command.compare("ADD"))
        {
            if (!phonebook.add())
                return 0;
        }
        else if (!command.compare("SEARCH"))
        {
            // if (!phonebook.search())
            //     return 0;
        }
        else
            invalid_command();
    }
}
