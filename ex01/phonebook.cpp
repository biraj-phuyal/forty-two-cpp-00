#include "phonebook.hpp"

bool Phonebook::add(){
    Contact fake;

    std::string answer;

    std::cout << "Enter first name: " << std::endl;

    if (!std::getline(std::cin, answer) || !std::cin.eof())
        return false;
    
}

bool Phonebook::search(){}
