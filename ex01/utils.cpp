#include "phonebook.hpp"

bool    is_number_valid(std::string phone_number)
{
    int i;

    for(i = 0; phone_number[i]; i++)
    {
        if (std::isdigit(static_cast<unsigned char>(phone_number[i])))
            continue;
        else
            return (false);
    }
    return (true);
}

void invalid_command()
{
    std::cout << "\nThat's the wrong NUMBERRRRR 🙀🙀🙀🙀🙀🙀🙀🙀\n\nEnter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}