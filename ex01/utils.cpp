#include "phonebook.hpp"

bool    valid_numbers(std::string number)
{
    int i;

    for(i = 0; number[i]; i++)
    {
        if (std::isdigit(static_cast<unsigned char>(number[i])))
            continue;
        else
            return (true);
    }
    return (false);
}

bool    valid_string(std::string str)
{
    int i;

    for(i = 0; str[i]; i++)
    {
        if (std::isalpha(static_cast<unsigned char>(str[i])))
            continue;
        else
            return (true);
    }
    return (false);
}

void invalid_command()
{
    std::cout << "\nThat's the wrong NUMBERRRRR 🙀🙀🙀🙀🙀🙀🙀🙀\n\nEnter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}