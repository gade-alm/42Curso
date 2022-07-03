/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:50:11 by gabrieldeal       #+#    #+#             */
/*   Updated: 2022/07/03 10:51:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Used to insert a value on the beggining of the linked 
list and goes to the next node*/
void	insert(t_list **head, int num)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	temp->data = num;
	temp->next = *head;
	*head = temp;
}

/*check if there is any number duplicated on the list and if it finds one, 
returns 1 so we can check on the main function and return an error*/
int	dup_check(t_list *head)
{
	t_list	*ptr;

	while (head->next != NULL)
	{
		ptr = head->next;
		while (ptr != NULL)
		{
			if (head->data == ptr->data)
			{
				return (1);
			}
			ptr = ptr->next;
		}
		head = head->next;
	}
	return (0);
}
