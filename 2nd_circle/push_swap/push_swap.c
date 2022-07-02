/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:19:11 by gade-alm          #+#    #+#             */
/*   Updated: 2022/07/02 17:49:27 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int signal;
	int conv;

	conv = 0;
	signal = 1;
	while (*str == 32 || *str > 8 && *str < 14)
		str++;
	if (*str == '-')
	{
		signal *= -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		conv = (conv * 10 + (signal * (*str - '0')));
		*str++;
		if (conv < -2147483648 || conv > 2147483647)
			return (99);
	}
	return (conv);
}

int main()
{
	char *str = "214748364812";

	printf("%i\n",ft_atoi(str));
}