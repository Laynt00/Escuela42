#include "mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <X11/X.h>
#include <X11/keysym.h>

typedef struct s_data
{
	void *mlx_ptr;
	void *win_ptr;
} t_data;

int on_destroy(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(0);
	return (0);
}

int on_keypress(int keysym, t_data *data)
{
	(void)data;
	printf("Pressed key: %d\\n", keysym);
	return (0);
}

int main(void)
{
	t_data data;
    void *img_player;
    int img_width;
	int img_height;


	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		return (1);
	data.win_ptr = mlx_new_window(data.mlx_ptr, 500, 500, "hi :)");
	if (!data.win_ptr)
		return (free(data.mlx_ptr), 1);

    // Display image, take mlxpointer, file address, horizontal vertical size, put it in memory and return the address of that memory
    img_player = mlx_xpm_file_to_image(data.mlx_ptr, "./images/player.xpm", &img_width, &img_height);

    // Accept the image and take the pointers to float and specify the coordinates inside the window to float on that window.
    mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, img_player, 0, 0);

	// Register key release hook
	mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &on_keypress, &data);

	// Register destroy hook
	mlx_hook(data.win_ptr, DestroyNotify, StructureNotifyMask, &on_destroy, &data);

	// Loop over the MLX pointer
	mlx_loop(data.mlx_ptr);
	return (0);
}