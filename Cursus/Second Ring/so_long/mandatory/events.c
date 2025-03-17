/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:28:28 by alvartor          #+#    #+#             */
/*   Updated: 2025/03/17 11:40:38 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	putuns(unsigned int nbr)
{
	char	c;

	c = nbr + 48;
	if (nbr <= 9)
		write(1, &c, 1);
	else
	{
		putuns(nbr / 10);
		putuns(nbr % 10);
	}
}

void	print_error(char *message, t_game *game)
{
	if (game)
	{
		if (game->map)
		{
			free_game(game->map);
		}
		free(game);
	}
	write(2, message, ft_strlen(message));
	exit (1);
}

int	close_game(t_game *game)
{
	if (game)
	{
		if (game->map)
			free_game(game->map);
		free(game);
	}
	exit(0);
	return (0);
}

void	free_game(char **map)
{
	int	i;

	i = 0;
	if (!map)
		return ;
	while (map[i])
	{
		free (map[i]);
		i++;
	}
	free (map);
}
