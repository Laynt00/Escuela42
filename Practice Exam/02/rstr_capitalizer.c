#include <unistd.h>

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int main(int ac, char *av[])
{
    if(ac > 1)
    {
        int i = 0;
        int argu = 1;
        while(argu < ac)
        {
            i = 0;
            while(av[argu][i] == ' ' || av[argu][i] == '\t')
            {
                write(1, &av[argu][i], 1);
                i++;
            }
            while(av[argu][i])
            {
                if(((av[argu][i + 1]) || (av[argu][i + 1] == ' '))&& ft_isalpha(av[argu][i]))
                {
                        if(av[argu][i] >= 'A' && av[argu][i] <= 'Z')
                            av[argu][i] += 32;
                }
                if(((av[argu][i + 1] == '\0') || (av[argu][i + 1] == ' ')) && ft_isalpha(av[argu][i]))
                {
                    if(av[argu][i] >= 'a' && av[argu][i] <= 'z')
                            av[argu][i] -= 32;
                }
                write(1, &av[argu][i], 1);
                i++;
            }
            write(1, "\n", 1);
            argu++;
        }
    }
    else
        write(1, "\n", 1);
}