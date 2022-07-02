/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:50:05 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/06/24 15:52:17 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap the first two members of the list A (1st list)
void swap_a(t_list *a)
{
	int	temp;

	temp = a->data;
	a->data = a->next->data;
	a->next->data = temp;
	write (1, "sa", 2);
}

//swap the first two members of the list B(2nd list)
void swap_b(t_list *b)
{
	int	temp;

	temp = b->data;
	b->data = b->next->data;
	b->next->data = temp;
	write (1, "sb", 2);
}

//swap the first two members of both lists A and B
void swap_both(t_list *a, t_list *b)
{
	int	atemp;
	int btemp;

	atemp = a->data;
	a->data = a->next->data;
	a->next->data = atemp;
	btemp = b->data;
	b->data = b->next->data;
	b->next->data = btemp;
	write (1, "ss", 2);
}