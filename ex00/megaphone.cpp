#include <iostream>

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
                std::cout << (char)std::toupper(argv[i][j]);
            if (argv[i + 1] != NULL)
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
}