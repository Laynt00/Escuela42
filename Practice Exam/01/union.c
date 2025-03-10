#include <unistd.h>

int main(int ac, char *av[])
{
    if(ac == 3)
    {
        int storage[128] = {};
        int i = 0;
        while(av[1][i])
        {
            if(!storage[av[1][i]])
            {
                write(1, &av[1][i], 1);
                storage[av[1][i]] = 1;
            }
            i++;
        }

        i = 0;
        while(av[2][i])
        {
            if(!storage[av[2][i]])
            {
                write(1, &av[2][i], 1);
                storage[av[2][i]] = 1;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}