#include "phonebook.hpp"

Phonebook::Phonebook() {
    count = 0;
}

bool Phonebook::add(){
    Contact fake;

    std::string answer;

    // <-------------------- First name ----------------------------->
    std::cout << "Enter first name: " << std::endl;
    if (!std::getline(std::cin, answer))
        return false;
    if (!valid_string(answer) && !answer.empty())
    {
        std::cout << "Can only be letters BROOOOOO" << std::endl;
        if (std::getline(std::cin, answer))
            fake.append_first_name(answer, false);
        else
            return (false);
    }

    // <-------------------- Last name ----------------------------->
    std::cout << "Enter last name: " << std::endl;
    if (!std::getline(std::cin, answer))
        return false;
    if (!valid_string(answer) && !answer.empty())
    {
        std::cout << "Can only be letters BROOOOOO" << std::endl;
        if (std::getline(std::cin, answer))
            fake.append_last_name(answer, false);
        else
            return (false);
    }

    // <-------------------- Nick name ----------------------------->
    std::cout << "Enter nickname: " << std::endl;
    if (!std::getline(std::cin, answer))
        return false;
    if (!valid_string(answer) && !answer.empty())
    {
        std::cout << "Can only be letters BROOOOOO" << std::endl;
        if (std::getline(std::cin, answer))
            fake.append_nickname(answer, false);
        else
            return (false);
    }

    // <-------------------- Phone number ----------------------------->
    std::cout << "Enter phone number: " << std::endl;
    if (!std::getline(std::cin, answer))
        return false;
    if (!valid_numbers(answer) && !answer.empty())
    {
        std::cout << "Can only be numbers BROOOOOO" << std::endl;
        if (std::getline(std::cin, answer))
            fake.append_phone_number(answer, false);
        else
            return (false);
    }

    // <-------------------- Darkest secret ----------------------------->
    std::cout << "Enter darkest secret: " << std::endl;
    if (!std::getline(std::cin, answer))
        return false;
    if (!valid_string(answer) && !answer.empty())
    {
        std::cout << "Can only be letters BROOOOOO" << std::endl;
        if (std::getline(std::cin, answer))
            fake.append_darkest_secret(answer, false);
        else
            return (false);
    }
    std::cout << "\nContact was added to the registry" << std::endl;
    count += 1;
    return true;
}

// bool Phonebook::search(){}
