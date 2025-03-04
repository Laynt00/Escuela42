#include <unistd.h>

void	ft_rotone(char	*str)
{
	int	c;

	c = 0;
	while (str[c])
	{
   		if (str[c] >= 'a' && str[c] <= 'y')	
			str[c] = str[c] + 1;
   		else if (str[c] >= 'A' && str[c] <= 'Y')
			str[c] = str[c]  + 1;
		else if (str[c] == 'z' || str[c] == 'Z')
			str[c] = str[c] - 25;
		write (1, &str[c], 1);
		c++;
	}
}
int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
}