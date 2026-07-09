#include "contact.hpp"

Contact::Contact(): first_name(""), last_name(""), nickname(""), phone_number(0), darkest_secret("") {}; 

std::string    Contact::append_first_name(std::string value, bool get){
     if (get == true)
        return first_name;
    first_name = first_name;
    return (NULL);
}

std::string    Contact::append_last_name(std::string value, bool get){
     if (get == true)
        return last_name;
    last_name = last_name;
    return (NULL);
}

std::string    Contact::append_nickname(std::string value, bool get){
     if (get == true)
        return 
    nickname = nickname;
    return (NULL);
}

std::string    Contact::append_phone_number(std::string value, bool get){
     if (get == true)
        return 
    phone_number = phone_number;
    return (NULL);
}

std::string    Contact::append_darkest_secret(std::string value, bool get){
     if (get == true)
        return 
    darkest_secret = darkest_secret;
    return (NULL);
}