#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        std::string	grab_first_name();
		std::string	grab_last_name();
		std::string	grab_nickname();
		std::string	grab_phone_num();
		std::string	grab_darkest_secret();

        void append_first_name(std::string first_name);
        void append_last_name(std::string first_name);
        void append_nickname(std::string first_name);
        void append_phone_number(std::string first_name);
        void append_darkest_secret(std::string darkest_secret);

};


#endif