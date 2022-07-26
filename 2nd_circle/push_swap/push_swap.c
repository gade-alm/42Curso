/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:09:40 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/26 17:10:25 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(t_list **list, int num)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return ;
	temp->data = num;
	temp->next = NULL;
	ft_lstadd_back(list, temp);
}

long	ft_atoi(char **str)
{
	int		n;
	long	s;

	while ((**str >= 8 && **str<= 14) || (**str == 32))
		*str++;
}

int main(int ac, char **av)
{
}
