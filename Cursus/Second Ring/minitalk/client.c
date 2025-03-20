#include "minitalk.h"

volatile sig_atomic_t	g_server = BUSY;

static void	message_rec()
{
	g_server = READY;
}

static void	message_end()
{
	write(1,"Message received\n", 18);
	exit(EXIT_SUCCESS);
}

static void	send_char(char c, pid_t server)
{
	int	bit;

	bit = 0;
	while (bit < CHAR_BIT)
	{
		if (c & (0x80 >> bit))
			Kill(server, SIGUSR1);
		else
			Kill(server, SIGUSR2);
		bit++;
		while (BUSY == g_server)
			usleep(42);
		g_server = BUSY;
	}
}

int	main(int ac, char *av[])
{
	pid_t	server;
	char	*message;
	int		i;

	if (ac != 3)
	{
		write(2, "Usage: ./client <server> \"message\"\n", 36);
		return (EXIT_FAILURE);
	}
	server = atoi(av[1]);
	message = av[2];

	Signal(SIGUSR1, message_rec, false);
	Signal(SIGUSR2, message_end, false);

	i = 0;
	while (message[i])
		send_char(message[i++], server);
	send_char('\0', server);

	return (EXIT_SUCCESS);
}