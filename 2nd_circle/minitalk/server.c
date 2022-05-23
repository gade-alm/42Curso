/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:04 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/23 15:45:35 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void	print_message(char *str)
{
	int	n;
	int	*binary;
	int	bits;

	bits = 0;
	n = 0;
	binary[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	while (bits <= 7)
	{
		if (str[bits] != '0')
			n = n + binary[bits];
		bits++;
	}
	printf ("%c", n);
}

int	main(void)
{
	int		pid;
	char	*str;
	int		bits;

	pid = getpid();
	printf("%i\n", pid);
}
