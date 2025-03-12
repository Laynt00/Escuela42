int *ft_range(int start, int end)
{
    int i = 0;
	// condicion ? true : false
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start);
    int *range = (int *) malloc((len + 1) * sizeof(int));
    while (i < len)
    {
        if (start < end)
            range[i] = start++;
        else
            range[i] = start--;
        i++;
    }
    return (range);
}