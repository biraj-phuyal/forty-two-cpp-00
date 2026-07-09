#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
        int index = 0;
    public:
        bool add();
        bool search();
};

bool is_number_valid(std::string phone_number);
void invalid_command();

#endif