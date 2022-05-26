/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:04 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/26 18:12:24 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include "minitalk.h"

void	print_message(char *str)
{
	static int	binary[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	int			n;
	int			bits;

	bits = 0;
	n = 0;
	while (bits <= 7)
	{
		if (str[bits] != '0')
		{
			n += binary[bits];
			bits++;
		}
		bits++;
	}
	printf("%c", n);
}

void	handle_sigusr(int sig)
{
	static char	str[8];
	static int	i;

	i = 0;
	if (sig == SIGUSR1)
	{
		str[i] = '0';
		i++;
	}
	else if (sig == SIGUSR2)
	{
		str[i++] = '1';
		i++;
	}
	if (i == 8)
	{
		print_message(str);
	}
}

int	main(void)
{
	int		pid;

	pid = getpid();
	printf("%i\n", pid);
	signal(SIGUSR1, handle_sigusr);
	signal(SIGUSR2, handle_sigusr);
	while (1)
	{
		pause();
	}
	return (0);
}
