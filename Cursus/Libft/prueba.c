// Counts the number of digits in number
#include <stdbool.h>
#include <stdio.h>

int	num_len(int n)
{
	int		count;

	count = 0;
	if(n == 0)
		return(1);
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

char	*itoa(int n)
{
	bool	sign;
	int	d_count;
	char	*result;

	sign = n < 0;
	d_count = num_len(n) + sign;
	printf ("Digitos en el int: %d\n",num_len(n));
	return 0;
}

int main ()
{
  itoa(-1000);
  
  //printf ("Numero en string: %s\n",ft_itoa(i));
  return 0;
}