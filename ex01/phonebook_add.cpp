#include "phonebook.hpp"

Phonebook::Phonebook() : count(0), oldest(0) {}

bool Phonebook::add(){
    Contact fake;
    std::string answer;

    // <-------------------- First name -------------------------->
    while (true)
    {
        std::cout << "Enter first name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "This is mandatory, it cannot be empty" << std::endl;
    }
    fake.append_first_name(answer, false);

    // <-------------------- Last name ---------------------------->
    while (true)
    {
        std::cout << "Enter last name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "This is mandatory, it cannot be empty" << std::endl;
    }
    fake.append_last_name(answer, false);

    // <-------------------- Nick name ----------------------------->
    while (true)
    {
        std::cout << "Enter nickname: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "This is mandatory, it cannot be empty" << std::endl;
    }
    fake.append_nickname(answer, false);

    // <-------------------- Phone number -------------------------->
    while (true)
    {
        std::cout << "Enter phone number: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "This is mandatory, it cannot be empty" << std::endl;
    }
    fake.append_phone_number(answer, false);

    // <-------------------- Darkest secret ------------------------>
    while (true)
    {
        std::cout << "Enter darkest secret: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "This is mandatory, it cannot be empty" << std::endl;
    }
    fake.append_darkest_secret(answer, false);

    if (count < 8)
        contacts[count++] = fake;
    else
    {
        contacts[oldest] = fake;
        oldest = (oldest + 1) % 8;
    }

    std::cout << "\nContact was added to the registry" << std::endl;
    fake.print_contact();
    return true;
}
