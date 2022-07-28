/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:54:52 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/28 19:10:14 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_linux/mlx.h"


int main(void)
{
	void	*mlx;
	char	*relative_path = "2nd_circle/so_long/imgs/grass.xpm";
	int		img_width;
	int		img_height;
	
	mlx = mlx_init();
	mlx_new_window(mlx, 960, 480, "teste");
	mlx_new_image(mlx, 960, 480);
	mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_loop(mlx);
}