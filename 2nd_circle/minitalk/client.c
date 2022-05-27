/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:05:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/27 22:22:43 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "minitalk.h"

#include "minitalk.h"

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
	int		i;

	if (argc != 3)
	{
		printf("Wrong number of arguments!\n");
		return (0);
	}
	(void)argc;
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
