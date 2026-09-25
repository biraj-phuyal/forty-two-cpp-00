#include "phonebook.hpp"

PhoneBook::PhoneBook() : count(0), oldest(0) {}

bool PhoneBook::add(){
    Contact fake;
    std::string answer;

    while (true)
    {
        std::cout << "Enter first name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "Enter nonempty text using printable characters" << std::endl;
    }
    fake.append_first_name(answer, false);

    while (true)
    {
        std::cout << "Enter last name: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "Enter nonempty text using printable characters" << std::endl;
    }
    fake.append_last_name(answer, false);

    while (true)
    {
        std::cout << "Enter nickname: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "Enter nonempty text using printable characters" << std::endl;
    }
    fake.append_nickname(answer, false);

    while (true)
    {
        std::cout << "Enter phone number: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "Enter nonempty text using printable characters" << std::endl;
    }
    fake.append_phone_number(answer, false);

    while (true)
    {
        std::cout << "Enter darkest secret: " << std::endl;
        if (!std::getline(std::cin, answer))
            return false;
        if (!answer.empty())
            break;
        std::cout << "Enter nonempty text using printable characters" << std::endl;
    }
    fake.append_darkest_secret(answer, false);

    contacts[oldest] = fake;
    oldest = (oldest + 1) % 8;
    if (count < 8)
        count++;
    std::cout << "\nContact was added to the registry" << std::endl;
    fake.print_contact();
    return true;
}
