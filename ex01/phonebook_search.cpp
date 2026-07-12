#include "phonebook.hpp"

bool Phonebook::search(){
    std::string index;

    while (1)
    {
        print_for_search("Index");
        print_for_search("First Name");
        print_for_search("Last Name");
        print_for_search("Nickname");
        std::cout << std::endl;

        if (exist == true)
        {
            int i;
            for(i = 0; i < 8; i++)
            {
                std::cout.width(10);
                std::cout << i << "|";
                print_for_search(contacts[i].append_first_name("", true));
                print_for_search(contacts[i].append_last_name("", true));
                print_for_search(contacts[i].append_nickname("", true));
                std::cout << std::endl;
            }
        }
        else
        {
            std::cout << "No contacts to show: write 'exit' and add some contacts: " << std::endl;
            if (!std::getline(std::cin, index))
                break;
            if (index.compare("EXIT"))
                return false;
        }
        break;
    }
    std::cout << std::endl;
    return (true);
}