#include "phonebook.hpp"
#include <cctype>

void    print_for_search(std::string value)
{
    if (value.length() > 10)
        value = value.substr(0, 9) + ".";
    std::cout << std::setw(10) << value << "|";
}

void invalid_command()
{
    std::cout << "\nThat's a wrong command" << std::endl;
}
