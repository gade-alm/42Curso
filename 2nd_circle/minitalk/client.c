/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:05:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/06/02 16:46:05 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str)
{
	int			i;
	int			signal;
	long long	conv;

	i = 0;
	signal = 1;
	conv = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str [i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = (conv * 10 + (signal * (str[i] - '0')));
			i++;
		if (conv > 2147483647)
			return (-1);
		if (conv < -2147483648)
			return (0);
	}
	return (conv);
}

void	char_to_binary(char c, int pid)
{
	int		i;
	char	signal;

	signal = 0;
	i = 8;
	if (!c)
		c = '\n';
	while (--i >= 0)
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
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;

	if (argc != 3)
	{
		printf("Wrong number of arguments!\n");
		return (0);
	}
	if (argv[1])
	(void)argc;
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		char_to_binary(argv[2][i], pid);
			i++;
	}
	char_to_binary(argv[2][i], pid);
	return (0);
}
