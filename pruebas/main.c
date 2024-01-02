#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include "../Cursus/Libft/libft.h"

int ft_toupper(int c)
    {
        if (c >= 97 && c <= 122)
            return (c - 32);
        else 
            return (c);
    }

int main (void)
{
    int i = 98;

    printf("%c\n", i);
    printf("%c\n", ft_toupper(i));
    printf("%c\n", toupper(i));


    return (0);
}