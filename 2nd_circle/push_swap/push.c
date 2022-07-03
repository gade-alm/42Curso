/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:49:56 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/07/03 10:59:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*push the first node from a to b, by creating a new node, copying
a value then inserting b list after the node*/
void	push_a(t_list **a, t_list **b)
{
	t_list	*node;

	if (!*a)
		return (0);
	node = *a;
	*a = (*a)->next;
	node->next = *b;
	*b = node;
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*node;

	if (!*a)
		return (0);
	node = *a;
	*a = (*a)->next;
	node->next = *b;
	*b = node;
}
