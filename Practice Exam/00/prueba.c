#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    unsigned int i;
    
    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = 0;
    return (s1);
}

int main()
{
	int i = 'a';
	write(1, &i,1);
    write(1, "\n",1);
    printf("%i\n", i);

	return 0;
}