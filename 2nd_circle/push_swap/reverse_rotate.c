/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:11 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/07/19 13:13:51 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **a)
{
	t_list	*current;
	t_list	*temp;
	
	current = *a;
	temp = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *a;
	*a = temp->next;
	temp->next = NULL;
}

void	reverse_rotate_b(t_list **b)
{
	{
	t_list	*current;
	t_list	*temp;
	
	current = *b;
	temp = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *b;
	*b = temp->next;
	temp->next = NULL;
}

void	reverse_rotate_both(t_list **a, t_list **b)
{
	t_list	*currentA;
	t_list	*tempA;
	t_list	*currentB;
	t_list	*tempB;
	
	currentA = *a;
	tempA = currentA;
	while (currentA->next != NULL)
		currentA = currentA->next;
	currentA->next = *a;
	*a = tempA->next;
	tempA->next = NULL;
	currentB = *b;
	tempB = currentB;
	while (currentB->next != NULL)
		currentB = currentB->next;
	currentB->next = *b;
	*b = tempB->next;
	tempB->next = NULL;
}
