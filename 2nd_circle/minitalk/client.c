/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:05:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/19 19:24:41 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	char_to_binary(char c)
{
	char	binary;
	int			i;

	i = 7;
	while (i >= 0)
	{
		printf("%c", ((binary >> i) & 1) + 48);
		i--;
	}
	printf ("\n");
}

// int	main(void)
// {
// 	int	id;

// 	id = getpid();
// 	printf("%i\n", id);
// 	while(1);
// }

int main()
{
	char_to_binary('t');
}
