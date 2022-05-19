/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:01:12 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/02 15:47:44 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_dup(int *num)
{
	int	i;
	int	j;

	i = -1;
	j = 1;
	while (num[i])
	{
		while (num[j])
		{
			if (num[i] == num[j])
			{
				return (1);
				break ;
			}
			else
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
