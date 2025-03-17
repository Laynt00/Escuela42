/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:28:44 by alvartor          #+#    #+#             */
/*   Updated: 2025/03/17 12:10:39 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_up(t_game *game)
{
	count_collected(game);
	position(game, 'P');
	if (game->map[game->player_x - 1][game->player_y] == '0'
		|| game->map[game->player_x - 1][game->player_y] == 'C')
	{
		if (game->map[game->player_x - 1][game->player_y] == 'C')
			game->collected--;
		game->moves++;
		putuns(game->moves);
		write(1, "\n", 1);
		game->map[game->player_x - 1][game->player_y] = 'P';
		game->map[game->player_x][game->player_y] = '0';
	}
	if (game->map[game->player_x - 1][game->player_y] == 'E'
		&& game->collected == 0)
		(write(1, "Winner Winner Chicken Dinner!\n", 31), close_game(game));
	draw_map(game);
}

void	player_down(t_game *game)
{
	count_collected(game);
	position(game, 'P');
	if (game->map[game->player_x + 1][game->player_y] == '0'
		|| game->map[game->player_x + 1][game->player_y] == 'C')
	{
		if (game->map[game->player_x + 1][game->player_y] == 'C')
			game->collected--;
		game->moves++;
		putuns(game->moves);
		write(1, "\n", 1);
		game->map[game->player_x + 1][game->player_y] = 'P';
		game->map[game->player_x][game->player_y] = '0';
	}
	if (game->map[game->player_x + 1][game->player_y] == 'E'
		&& game->collected == 0)
		(write(1, "Winner Winner Chicken Dinner!\n", 31), close_game(game));
	draw_map(game);
}

void	player_right(t_game *game)
{
	count_collected(game);
	position(game, 'P');
	if (game->map[game->player_x][game->player_y + 1] == '0'
		|| game->map[game->player_x][game->player_y + 1] == 'C')
	{
		if (game->map[game->player_x][game->player_y + 1] == 'C')
			game->collected--;
		game->moves++;
		putuns(game->moves);
		write(1, "\n", 1);
		game->map[game->player_x][game->player_y + 1] = 'P';
		game->map[game->player_x][game->player_y] = '0';
	}
	if (game->map[game->player_x][game->player_y + 1] == 'E'
		&& game->collected == 0)
		(write(1, "Winner Winner Chicken Dinner!\n", 31), close_game(game));
	draw_map(game);
}

void	player_left(t_game *game)
{
	count_collected(game);
	position(game, 'P');
	if (game->map[game->player_x][game->player_y - 1] == '0'
		|| game->map[game->player_x][game->player_y - 1] == 'C')
	{
		if (game->map[game->player_x][game->player_y - 1] == 'C')
			game->collected--;
		game->moves++;
		putuns(game->moves);
		write(1, "\n", 1);
		game->map[game->player_x][game->player_y - 1] = 'P';
		game->map[game->player_x][game->player_y] = '0';
	}
	if (game->map[game->player_x][game->player_y - 1] == 'E'
		&& game->collected == 0)
		(write(1, "Winner Winner Chicken Dinner!\n", 31), close_game(game));
	draw_map(game);
}

int	handle_keypress(int keycode, t_game *game)
{
	count_collected(game);
	if (game->collected == 0)
	{
		game->d_image = mlx_xpm_file_to_image(game->mlx,
				"textures/door_o.xpm", &game->img_width, &game->img_height);
		draw_map(game);
	}
	if (keycode == KEY_W)
		player_up(game);
	if (keycode == KEY_S)
		player_down(game);
	if (keycode == KEY_D)
		player_right(game);
	if (keycode == KEY_A)
		player_left(game);
	else if (keycode == KEY_ESC)
		close_game(game);
	return (0);
}
