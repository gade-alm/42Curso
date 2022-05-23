/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:04 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/23 18:40:29 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include "minitalk.h"

// char	*message(char *str)
// {
// 	int		i;
// 	int		j;
// 	char	*ret;

// 	i = 0;
// 	j = 0;
// 	while (str[i])
// 	{
// 		while (j < 8)
// 		{
// 		ret[i] = print_message(str[i]);
// 		j++;
// 		}
// 		j = 0;
// 		i++;
// 	}
// 	printf ("%s\n", ret);
// }

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
			n = n + binary[bits];
		bits++;
	}
	printf ("%c", n);
}

void	handle_sigusr(int sig)
{
	if (sig == SIGUSR1)
		write(1, "0", 1);
	else if (sig == SIGUSR2)
		write(1, "1", 1);
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
