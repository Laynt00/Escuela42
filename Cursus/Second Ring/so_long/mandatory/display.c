/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:28:25 by alvartor          #+#    #+#             */
/*   Updated: 2025/03/17 13:42:20 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_map(t_game *game)
{
	game->i = 0;
	while (game->map[game->i])
	{
		game->j = 0;
		while (game->map[game->i][game->j])
		{
			if (game->map[game->i][game->j] == 'E')
				mlx_put_image_to_window(game->mlx, game->window,
					game->d_image, game->j * 64, game->i * 64);
			if (game->map[game->i][game->j] == 'P')
				mlx_put_image_to_window(game->mlx, game->window,
					game->p_image, game->j * 64, game->i * 64);
			if (game->map[game->i][game->j] == '1')
				mlx_put_image_to_window(game->mlx, game->window,
					game->w_image, game->j * 64, game->i * 64);
			if (game->map[game->i][game->j] == '0')
				mlx_put_image_to_window(game->mlx, game->window,
					game->floor, game->j * 64, game->i * 64);
			if (game->map[game->i][game->j] == 'C')
				mlx_put_image_to_window(game->mlx, game->window,
					game->c_image, game->j * 64, game->i * 64);
			game->j++;
		}
		game->i++;
	}
}

void	xpm_to_img(t_game *game)
{
	game->p_image = mlx_xpm_file_to_image(game->mlx,
			"textures/player.xpm", &game->img_width, &game->img_height);
	game->d_image = mlx_xpm_file_to_image(game->mlx,
			"textures/door_c.xpm", &game->img_width, &game->img_height);
	game->w_image = mlx_xpm_file_to_image(game->mlx,
			"textures/wall.xpm", &game->img_width, &game->img_height);
	game->c_image = mlx_xpm_file_to_image(game->mlx,
			"textures/chest.xpm", &game->img_width, &game->img_height);
	game->floor = mlx_xpm_file_to_image(game->mlx,
			"textures/floor.xpm", &game->img_width, &game->img_height);
	if (!game->p_image || !game->d_image || !game->w_image
		|| !game->c_image || !game->floor)
		print_error("Error\nImage name not compatible!\n", game);
}

void	count_collected(t_game	*game)
{
	game->i = 0;
	game->collected = 0;
	while (game->map[game->i])
	{
		game->j = 0;
		while (game->map[game->i][game->j])
		{
			if (game->map[game->i][game->j] == 'C')
				game->collected++;
			game->j++;
		}
		game->i++;
	}
}

void	render_map(t_game *game)
{
	game->moves = 0;
	game->mlx = mlx_init();
	if (!game->mlx)
		(print_error("Error\nCouldnt inicializate MLX window!\n", game));
	game->window = mlx_new_window(game->mlx,
			game->map_width * 64, game->map_height * 64,
			"so_long");
	if (!game->window)
		print_error("Error\nFailure creating MLX window!\n", game);
	xpm_to_img(game);
	draw_map(game);
	mlx_hook(game->window, 2, 1L << 0, handle_keypress, game);
	mlx_hook(game->window, 17, 1L << 0, close_game, game);
	mlx_loop(game->mlx);
}
