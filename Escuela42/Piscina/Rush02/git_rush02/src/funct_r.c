#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Devuelve el numero del diccionario (str)
char	*ft_getnb(int fd)
{
	int	i;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	// size_t read (int fd, void* buf, size_t cnt);
	// Leemos un caracter
	read(fd, c, 1);
	// Final de linea
	while (c[0] == '\n')
		read(fd, c, 1);
    // Mientras sea un número lo leemos
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

// Devuelve el string del diccionario (str)
char	*ft_getval(int fd, char *c)
{
	int	i;
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

// Procesa el diccionario
t_list	*process(char *file)
{
	int	i;
	int	fd;
	char	c[1];
	t_list	*tab;
	char *tmp;
    // Abrimos el diccionario (open -> fcntl.h)
	fd = open(file, O_RDONLY);
	// Malloc?
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 41)))
		exit(1);
	i = 0;
	while (i < 41)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		// *Filtramos hasta llegar a caracter imprimible
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		// *Fin del filtrado
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}