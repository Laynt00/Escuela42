unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int g;

    if(a > b)
        g = a;
    else
        g = b;
    // Check if any of the integer is null
    if (a == 0 || b == 0)
    	return (0);
    
    while (1)
    {
    	// if g is perfectly divisible by both a and b
    	// this is the lcm
        if ((g % a == 0) && (g % b == 0))
            return (g);
        g++;
    }
}
// Un-comment the following to test
// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
// 		printf("LCM: %u\n", m);
// 	}
// }