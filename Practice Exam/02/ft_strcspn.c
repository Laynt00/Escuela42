#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;


	i = 0;
	while (s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// int main()
// {
// 	char s[] = "test";
// 	char num[] = "f";

	
// 	int init = ft_strcspn(s, num);
// 	printf("init: %d\n", init);
// 	return 0;
// }