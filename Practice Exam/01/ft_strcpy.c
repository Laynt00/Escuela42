#include <unistd.h>

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
	char str[4];
	ft_strcpy(str, "hola");
	int i = 0;
	while (str[i])
	{
		write(1, &str[i],1);
		i++;
	}
	return 0;
}