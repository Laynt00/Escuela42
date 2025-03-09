#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	while(src[i])
	{
		i++;
	}
	char *dest = malloc(i * sizeof(char));
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char *str = "Hola que tal?";
// 	printf("%s", ft_strdup(str));
// }