#include "./push_swap.h"

static int	count_words(char *s, char c) 
{
	int		count; 
	bool	inside_word; 

	count = 0;
	while (*s) 
	{
		inside_word = false; 
		while (*s == c)
			++s; 
		while (*s != c && *s) 
		{
			if (!inside_word) 
			{
				++count; 
				inside_word = true;
			}
			++s;
		}
	}
	return (count);
}

char **split(char *s, char c) 
{
	int		words_count; 
	char	**result_array; 
	int		i; 

	i = 0;
	words_count = count_words(s, c);
	if (!words_count) 
		exit(1);
	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
		return (NULL);
	while (words_count-- >= 0) 
	{
		if (i == 0) 
		{
			result_array[i] = malloc(sizeof(char)); 
			result_array[i++][0] = '\0'; 
		result_array[i++] = get_next_word(s, c);
	}
	result_array[i] = NULL; 
	return (result_array);
}
