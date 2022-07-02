/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:49:56 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/06/24 16:21:29 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//push the first node from a to b
void	push_a(t_list **a,t_list **b)
{
	t_list *node; //create a new node to keep the value from a

	if (!*a)
		return;
	node = *a; //get the value from the first node of a
	*a = (*a)->next; //advance the pointer of a
	node->next = *b; //link the new value of node to the list b
	*b = node; //move b to point to the new node
}

void	push_b(t_list **b, t_list **a)
{
	t_list *node; //create a new node to keep the value from a

	if (!*a)
		return;
	node = *a; //get the value from the first node of a
	*a = (*a)->next; //advance the pointer of a
	node->next = *b; //link the new value of node to the list b
	*b = node; //move b to point to the new node
}