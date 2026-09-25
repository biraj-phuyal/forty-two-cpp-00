#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int count;
        int oldest;
    public:
        PhoneBook();
        bool add();
        int search();
};

void print_for_search(std::string value);
void invalid_command();

#endif
