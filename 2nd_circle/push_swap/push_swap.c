/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:19:11 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/03 10:43:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	signal;
	int	conv;

	conv = 0;
	signal = 1;
	while (*str == 32 || *str > 8 && *str < 14)
		str++;
	if (*str == '-')
	{
		signal *= -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		conv = (conv * 10 + (signal * (*str - '0')));
		if (conv < -2147483648 || conv > 2147483647)
			return (0);
		*str++ ;
	}
	return (conv);
}
