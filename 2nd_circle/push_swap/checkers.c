/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:06:19 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/25 11:06:23 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*check if there is any number duplicated on the list and if it finds one, 
returns 1 so we can check on the main function and return an error*/
int	check_dup(t_list *list, int num)
{
	while (list)
	{
		if (list->data == num)
			return (1);
		list = list->next;
	}
	return (0);
}
