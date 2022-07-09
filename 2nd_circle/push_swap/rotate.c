/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:50:02 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/07/09 16:21:51 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*current;
	t_list	*temp;
	
	current = *a;
	while (current->next != NULL)
		current = current->next;
	temp = current;
	current->next = *a;
	*a = temp->next;
	temp->next = NULL;
}
