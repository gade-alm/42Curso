/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:19:19 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/12 17:43:23 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_lenght;
	int		endian;
}			t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	float	x;
	float	y;

	x = 0;
	y = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1000, 1000, "Miguelito usa o VSCODE!");
	img.img = mlx_new_image(mlx, 1000, 1000);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_lenght, &img.endian);
	while (x < 100)
	{
		my_mlx_pixel_put(&img, x,  y / 2, 0x00FFFFFF);
		x++;
		y++;
	}
	while (x > 0)
	{
		my_mlx_pixel_put(&img, x,  y / 2, 0x00FFFFFF);
		x--;
	}
	while (y > 0)
	{
		my_mlx_pixel_put(&img, x, y/2, 0x00FFFFFF);
		y--;
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 300, 300);
	mlx_loop(mlx);
}
