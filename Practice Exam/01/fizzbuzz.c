#include <unistd.h>

//Print from 1 100
void ft_putnbr(int i)
{
	if(i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
		
}

int main(void)
{
	int x;

	x = 1;
	while(x <= 100)
	{
		if(x % 3 == 0 && x % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(x % 3 == 0)
			write(1, "fizz", 4);
		else if(x % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(x);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}