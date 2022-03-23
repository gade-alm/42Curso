/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:12:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/23 12:29:22 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*get_line(char *str)
{
	int		i;
	char	*s;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(*s) * (i + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i + 1] == '\n')
		s[i] = '\0';
	return (s);
}

char	*get_next_line(int fd)
{
	int		i;
	char	*next;

	next = ft_strchr()
}

int main(void)
{
	char	*str;

	str = "teste \n teste2";
	printf("%s", get_line(str));
	printf("%s", get_line(str));
}
