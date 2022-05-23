/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:05:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/23 12:43:49 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	char_to_binary(char c)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		printf("%c", ((c >> i) & 1) + 48);
		i--;
	}
	printf ("\n");
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
			if (((str[i] >> j) & 1) == 0)
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
	int		pid;
	char	*str;

	pid = (argv[2]);
	str = (argv[3]);
}
