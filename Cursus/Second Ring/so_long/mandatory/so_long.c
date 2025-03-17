/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:28:53 by alvartor          #+#    #+#             */
/*   Updated: 2025/03/17 11:40:48 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	read_map(char *filename, t_game *game, char **map)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error\nfile cannot be opened!\n", game);
	game->i = 0;
	line = get_next_line(fd);
	while (line)
	{
		if ((ft_strncmp(line, "\n", 1)) == 0 || ft_strlen(line) == 0)
		{
			free(line);
			close (fd);
			print_error("Error\nline is empty!", game);
		}
		map[game->i] = ft_strtrim(line, "\n");
		free(line);
		game->i++;
		line = get_next_line(fd);
	}
	map[game->i] = NULL;
	close (fd);
}

void	count_lines(char *filename, t_game *game)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		game->map = NULL;
		print_error("Error\nfile cannot be opened!\n", game);
	}
	game->lines = 0;
	line = get_next_line(fd);
	if (!line)
	{
		close(fd);
		print_error("Error\nEmpty file or read error!\n", game);
	}
	while (line)
	{
		game->lines++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc == 2)
	{
		if (ft_strrchr(argv[1], '.')
			&& (ft_strncmp(ft_strrchr(argv[1], '.'), ".ber", 6)) == 0)
		{
			game = malloc(sizeof(t_game));
			if (!game)
				print_error("Error\nMemory allocation failed!\n", NULL);
			count_lines(argv[1], game);
			game->map = malloc((game->lines + 1) * sizeof(char *));
			if (!game->map)
				print_error("Error\nMemory allocation failed for map!\n", game);
			read_map(argv[1], game, game->map);
			check_map_validity(game, argv[1]);
			free_game(game->map);
			free(game);
		}
		else
			print_error("Error\nThe map name must be .ber!\n", NULL);
	}
	else
		print_error("Error\nThe number of arguments must be 2!\n", NULL);
}
