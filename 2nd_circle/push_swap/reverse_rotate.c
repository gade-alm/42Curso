/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:09:53 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/26 17:29:51 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmplast);
	*a = tmplast;
	write (1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmplast);
	*b = tmplast;
	write (1, "rrb\n", 4)
}

void	reverse_rotate_both(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmplast);
	*a = tmplast;
	tmplast = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmplast);
	*b = tmplast;
	write (1, "rrr\n", 4);
}
