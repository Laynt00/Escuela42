#include <unistd.h>

int	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i = 0, j;
	// create an array of int that will act as a lookup table
	// 128 is because of the ascii table, each one will
	// correspond to a single character
	int	lookup[128] = {};

	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
				{
					lookup[(int)av[2][j]] = 1;
					write(1, &av[2][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
