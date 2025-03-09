#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0, j = 0;
    
    if (ac == 3)
    {
        // Looping over s2 only if there is something
        // in s1
        while (av[2][j] && av[1][i])
        {
            // If current char of s2 equals current char
            // of s1, advance in s1
            if (av[2][j] == av[1][i])
                i++;
            // advance in s2 every time
            j++;
        }
        // if we reached the end of s1, it's hidden in s2
        if (av[1][i] == 0)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}