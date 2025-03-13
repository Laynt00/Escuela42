#include "./includes/so_long.h"

void	print_err(char *message)
{
	write(2, "Error:\n", 7);
	write(2, message, ft_strlen(message));
	exit(1);
}

void	game_init(t_game *g, char *map)
{
	g->mlx = mlx_init();
	g->img = img_init(g->mlx);
	map_read(map, g);
	map_check(g);
	g->win = mlx_new_window(g->mlx, g->wid * 16, g->hei * 16, "so_long");
	setting_img(g);
}

int	exit_game(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit(0);
}

int	press_key(int key_code, t_game *game)
{
    printf("La tecla pulsada es: %i\n", key_code);
	if (key_code == KEY_ESC)
    {
		exit_game(game);
    }
	if (key_code == KEY_W)
    {
        write(2, "DETECTO W\n", 11);
		move_w(game);
    }
	if (key_code == KEY_A)
		move_a(game);
	if (key_code == KEY_S)
		move_s(game);
	if (key_code == KEY_D)
		move_d(game);
	return (0);
}

int	main(int ac, char *av[])
{
	t_game	*game;

	if (ac != 2)
		print_err("Map is missing.\n");
	game = malloc(sizeof(t_game));
	game_init(game, av[1]);
    write(2, " HE INICIADO EL JUEGO:\n", 24);
	mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L << 0, &press_key, game);
	mlx_hook(game->win, X_EVENT_KEY_EXIT, 1L << 0, &exit_game, game);
	mlx_loop(game->mlx);
	return (0);
}