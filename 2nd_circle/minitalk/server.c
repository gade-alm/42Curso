/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:04 by gade-alm          #+#    #+#             */
/*   Updated: 2022/06/01 16:10:25 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include "minitalk.h"

void	handle_sigusr(int sig)
{
	static int	binary[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	static int	i = 0;
	static char	sum = 0;

	if (sig == SIGUSR1)
	{
		i++;
	}
	if (sig == SIGUSR2)
	{
		sum = sum + binary[i];
		i++;
	}
	if (i >= 8)
	{
		write(1, &sum, 1);
		i = 0;
		sum = 0;
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
