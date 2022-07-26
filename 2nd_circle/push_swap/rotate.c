/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:09:49 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/26 16:37:17 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	*a = tmp;
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	*b = tmp;
}

void	rotate_both(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	*a = tmp;
	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	*b = tmp;
}
