#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();

        std::string append_first_name(std::string first_name, bool get);
        std::string append_last_name(std::string first_name, bool get);
        std::string append_nickname(std::string first_name, bool get);
        std::string append_phone_number(std::string first_name, bool get);
        std::string append_darkest_secret(std::string darkest_secret, bool get);
        void        print_contact() const;
};


#endif
