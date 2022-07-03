/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:30:43 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/03 10:52:17 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct node
{
	int				data;
	struct node		*next;	
}				t_list;

int		ft_atoi(char *str);
void	push_b(t_list **b, t_list **a);
void	push_a(t_list **a, t_list **b);
void	swap_a(t_list *a);
void	swap_b(t_list *b);

#endif