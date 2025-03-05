int		max(int* tab, unsigned int len)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while(i < len)
	{
		if(tab[i] > res)
			res = tab[i];
		i++;
	}
	return(res);
}