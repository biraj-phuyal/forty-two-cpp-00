#include "phonebook.hpp"

int PhoneBook::search(){
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
            std::cout << std::setw(10) << i << "|";
            print_for_search(contacts[i].append_first_name("", true));
            print_for_search(contacts[i].append_last_name("", true));
            print_for_search(contacts[i].append_nickname("", true));
            std::cout << std::endl;
        }
        std::cout << "'exit' to leave the search or to show a contact enter their index: " << std::endl;
        if (!std::getline(std::cin, index))
            break;
        if (!index.compare("EXIT"))
            return 0;
        if (!index.compare("exit"))
            return 2;
        else if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
        {
            selected = index[0] - '0';
            if (selected < count)
            {
                std::cout << std::endl;
                contacts[selected].print_contact();
                return 2;
            }
            else
                std::cout << "Invalid index" << std::endl;
        }
        else
            std::cout << "Invalid index" << std::endl;
    }
    std::cout << std::endl;
    return (0);
}
