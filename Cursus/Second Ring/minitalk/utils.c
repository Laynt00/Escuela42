#include "minitalk.h"

void	Signal(int sig, void *handler, bool use_siginfo)
{
	struct sigaction	sa = {0};

	if (use_siginfo)
	{
		sa.sa_sigaction = handler;
		sa.sa_flags = SA_SIGINFO;
	}
	else
		sa.sa_handler = handler;
 
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
    
	if (sigaction(sig, &sa, NULL) < 0)
	{
		perror("Signal handler setup failed");
		exit(EXIT_FAILURE);
	}
}

void	Kill(pid_t pid, int signum)
{
	if (kill(pid, signum) < 0)
	{
		perror("Signal transmission failed");
		exit(EXIT_FAILURE);
	}
}