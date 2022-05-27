/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:48:04 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/27 22:29:04 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include "minitalk.h"

// // void	print_message(char *str)
// // {
// // 	static int	binary[8] = {128, 64, 32, 16, 8, 4, 2, 1};
// // 	int			n;
// // 	int			bits;

// // 	bits = 0;
// // 	n = 0;
// // 	while (bits <= 7)
// // 	{
// // 		if (str[bits] != '0')
// // 		{
// // 			n += binary[bits];
// // 			bits++;
// // 		}
// // 		bits++;
// // 	}
// // 	printf("%c", n);
// // }

void	handle_sigusr(int sig)
{
	static int	binary[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	static int	i = 0;
	static char	sum = 0;

	if (sig == SIGUSR1)
		i++;
	if (sig == SIGUSR2)
	{
		sum = sum + binary[i];
		i++;
	}
	if (i == 8)
	{
		printf("%c", sum);
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
