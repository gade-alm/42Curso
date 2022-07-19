/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:50:02 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/07/19 13:37:47 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list** a)
{
	t_list *head;

	head = *a;
	while (head->next != NULL)
		head = head->next;
	head->next = *a;
	head = *a;
	*a = head->next;
	head->next = NULL;
}


void	rotate_b(t_list** b)
{
	t_list *head;

	head = *b;
	while (head->next != NULL)
		head = head->next;
	head->next = *b;
	head = *b;
	*b = head->next;
	head->next = NULL;
}

void	rotate_both(t_list** a, t_list** b)
{
	t_list *head_a;
	t_list *head_b;

	head_a = *a;
	while (head_a->next != NULL)
		head_a = head_a->next;
	head_a->next = *a;
	head_a = *a;
	*a = head_a->next;
	head_a->next = NULL;
	head_b = *b;
	while (head_b->next != NULL)
		head_b = head_b->next;
	head_b->next = *b;
	head_b = *b;
	*b = head_b->next;
	head_b->next = NULL;
}
