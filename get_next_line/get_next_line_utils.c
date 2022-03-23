/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:45 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/23 11:40:29 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		a;

	a = 0;
	str = (char *) s;
	while (str[a] != (unsigned char)c)
	{
		if (str[a] == '\0')
			return (NULL);
		a++;
	}
	return (&str[a]);
}
