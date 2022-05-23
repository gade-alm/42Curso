/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:05:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/23 17:20:59 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "minitalk.h"

void	char_to_binary(char c, int pid)
{
	int		i;
	char	signal;

	signal = 0;
	i = 7;
	while (i >= 0)
	{		
		signal = ((c >> i & 1) + 48);
		if (signal == '0')
		{
			kill(pid, SIGUSR1);
			usleep(100);
		}
		else if (signal == '1')
		{
			kill(pid, SIGUSR2);
			usleep(100);
		}
		i--;
	}
}

void	signal_handler(char *str, int pid)
{
	int	i;
	int	j;

	i = 0;
	j = 7;
	while (str[i])
	{
		while (j >= 0)
		{
			if (((str[i] >> j) & 1) == '0')
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j--;
		}
		j = 7;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	(void)argc;
	int	i;
	
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
		{
			char_to_binary(argv[2][i], pid);
			i++;
		}
	while (1)
	{
		pause();
	}
	return (0);
}
