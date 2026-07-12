#include "phonebook.hpp"

Phonebook::Phonebook() {
    count = 0;
}

bool Phonebook::add(){
    Contact fake;
    std::string answer;

    // <-------------------- First name ----------------------------->
    while (true)
    {
        std::cout << "Enter first name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty() && !valid_string(answer))
            break;
        std::cout << "Can only be letters BROOOOOO" << std::endl;
    }
    fake.append_first_name(answer, false);

    // <-------------------- Last name ----------------------------->
    while (true)
    {
        std::cout << "Enter last name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty() && !valid_string(answer))
            break;
        std::cout << "Can only be letters BROOOOOO" << std::endl;
    }
    fake.append_last_name(answer, false);

    // <-------------------- Nick name ----------------------------->
    while (true)
    {
        std::cout << "Enter nickname: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty() && !valid_string(answer))
            break;
        std::cout << "Can only be letters BROOOOOO" << std::endl;
    }
    fake.append_nickname(answer, false);

    // <-------------------- Phone number ----------------------------->
    while (true)
    {
        std::cout << "Enter phone number: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty() && !valid_numbers(answer))
            break;
        std::cout << "Can only be numbers BROOOOOO" << std::endl;
    }
    fake.append_phone_number(answer, false);

    // <-------------------- Darkest secret ----------------------------->
    while (true)
    {
        std::cout << "Enter darkest secret: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty() && !valid_string(answer))
            break;
        std::cout << "Can only be letters BROOOOOO" << std::endl;
    }
    fake.append_darkest_secret(answer, false);

    if (count < 8)
        contacts[count++] = fake;
    else
    {
        int i;
        for (i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];
        contacts[7] = fake;
    }

    std::cout << "\nContact was added to the registry" << std::endl;
    fake.print_contact();
    return true;
}
