#ifndef TALK_H
#define TALK_H

#define _GNU_SOURCE // Permite encontrar el struct sigaction

# include <signal.h>
# include <stdio.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <limits.h>

#define BUSY	0
#define READY	1

void	Signal(int sig, void *handler, bool use_siginfo);
void	Kill(pid_t pid, int signum);

#endif