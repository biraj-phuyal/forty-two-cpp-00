#include "contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}

std::string    Contact::append_first_name(std::string value, bool get){
     if (get == true)
        return first_name;
    first_name =value;
    return ("");
}

std::string    Contact::append_last_name(std::string value, bool get){
     if (get == true)
        return last_name;
    last_name = value;
    return ("");
}

std::string    Contact::append_nickname(std::string value, bool get){
     if (get == true)
        return nickname;
    nickname = value;
    return ("");
}

std::string    Contact::append_phone_number(std::string value, bool get){
     if (get == true)
        return phone_number;
    phone_number = value;
    return ("");
}

std::string    Contact::append_darkest_secret(std::string value, bool get){
     if (get == true)
        return darkest_secret;
    darkest_secret = value;
    return ("");
}

void    Contact::print_contact() const {
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
