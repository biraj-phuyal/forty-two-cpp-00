#include "phonebook.hpp"
#include <cstdlib>

int Phonebook::search(){
    std::string index;
    int selected;

    while (1)
    {
        print_for_search("Index");
        print_for_search("First Name");
        print_for_search("Last Name");
        print_for_search("Nickname");
        std::cout << std::endl;

        int i;
        for(i = 0; i < count; i++)
        {
            std::cout.width(10);
            std::cout << i << "|";
            print_for_search(contacts[i].append_first_name("", true));
            print_for_search(contacts[i].append_last_name("", true));
            print_for_search(contacts[i].append_nickname("", true));
            std::cout << std::endl;
        }
        std::cout << "'exit' to leave the search or to show a contact enter their index: ";
        if (!std::getline(std::cin, index))
            break;
        if (!index.compare("exit") || !index.compare("EXIT"))
            return 2;
        else if (!index.empty() && (index.find_first_not_of("0123456789") == std::string::npos))
        {
            std::cout << std::endl;
            selected = std::atoi(index.c_str());
            if (selected >= 0 && selected < count)
            {
                contacts[selected].print_contact();
                return 2;
            }
            else
            {
                std::cout << "Invalid index" << std::endl;
                std::cout << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid index" << std::endl;
        }
    }
    std::cout << std::endl;
    return (0);
}
