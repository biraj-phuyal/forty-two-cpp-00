#include <iostream>
#include <cctype>

int main(int args, char *argv[]) 
{
    int i;
    int j;

    if (args == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (args >= 2)
    {
        for (i = 1; argv[i]; i++)
        {
            for (j = 0; argv[i][j]; j++)
                std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
        }
        std::cout << std::endl;
    }
    return 0;
}