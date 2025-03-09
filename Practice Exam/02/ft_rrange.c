#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
	// condicion ? true : false
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    int *range = (int *) malloc(len * sizeof(int));
    while (i < len)
    {
            range[i] = end--;
        i++;
    }
    return (range);
}