/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:57:08 by gade-alm          #+#    #+#             */
/*   Updated: 2022/08/01 17:32:28 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hooks(int keycode, t_window *mlx)
{
	if (keycode == 65307)
		mlx_destroy_display(mlx->mlx);
}