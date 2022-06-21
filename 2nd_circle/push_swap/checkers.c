/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:38:06 by gade-alm          #+#    #+#             */
/*   Updated: 2022/06/21 16:29:44 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//create functions to check if there's any duplicate and if it's already sorted

int	duplicate(t_list *num)
{
	struct node	*current;
	struct node	*index;

	current = num->next;
	while (num->next != NULL)
	{
		while (current->next != NULL)
		{
			if (num->content == current->content)
			{
				return (1);
				break ;
			}
		}
		current = num->next;
	}
	return (0);
}
