#include "./includes/so_long.h"

// Loads the XPM image files into our data structure rt

t_img	img_init(void *mlx)
{
	t_img	rt;
	int		wid;
	int		hei;

	rt.floor = mlx_xpm_file_to_image(mlx, "./images/floor.xpm", &wid, &hei);
	rt.wall = mlx_xpm_file_to_image(mlx, "./images/wall.xpm", &wid, &hei);
	rt.player = mlx_xpm_file_to_image(mlx, "./images/player.xpm", &wid, &hei);
	rt.chest = mlx_xpm_file_to_image(mlx, "./images/chest.xpm", &wid, &hei);
	rt.door_c = mlx_xpm_file_to_image(mlx, "./images/door_c.xpm", &wid, &hei);
	rt.door_o= mlx_xpm_file_to_image(mlx, "./images/door_o.xpm", &wid, &hei);
	return (rt);
}

// Displays our images into the X11 Window following:

void	put_img(t_game *g, int w, int h)
{
	if (g->str_line[h * g->wid + w] == '1')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.wall, w * 16, h * 16);
	}
	else if (g->str_line[h * g->wid + w] == 'C')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.chest, w * 16, h * 16);
	}
	else if (g->str_line[h * g->wid + w] == 'P')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.player, w * 16, h * 16);
	}
	else if (g->str_line[h * g->wid + w] == 'E' && g->all_col == g->col_cnt)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.door_o, w * 16, h * 16);
	}
	else if (g->str_line[h * g->wid + w] == 'E')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.door_c, w * 16, h * 16);
	}
	else
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.floor, w * 16, h * 16);
	}
}

void	setting_img(t_game *game)
{
	int		hei;
	int		wid;

	hei = 0;
	while (hei < game->hei)
	{
		wid = 0;
		while (wid < game->wid)
		{
			put_img(game, wid, hei);
			wid++;
		}
		hei++;
	}
}