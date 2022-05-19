/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:38:52 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/02 11:55:19 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sa(int *a)
{
	int	temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

void	sb(int *b)
{
	int	temp;

	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
}

void	ss(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = a[0];
	a[0] = a[1];
	a[1] = temp1;
	temp2 = b[0];
	b[0] = b[1];
	b[1] = temp2;
}
