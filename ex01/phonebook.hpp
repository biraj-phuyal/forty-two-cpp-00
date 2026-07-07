#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class Phonebook {
    private:
        Contact contacts[8];
    public:

};

bool is_number_valid(std::string phone_number);

#endif