#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
        int count;
    public:
        Phonebook();
        bool add();
        int search();
};

bool valid_numbers(std::string phone_number);
bool valid_string(std::string str);
void invalid_command();
void print_for_search(std::string value);

#endif
