#include <stdio.h>
#include <unistd.h>

// TESTS
/*
	gcc first_word.c -o first_word
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
			
	}
	write(1,"\n",1);
	return (0);
}