/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:04:06 by gade-alm          #+#    #+#             */
/*   Updated: 2022/08/01 18:16:15 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	*ft_strrchr(const char *s, char c)
{
	char	*str;
	int		len;

	len = 0;
	str = (char *)s;
	while (str[len++])
		;
	while (len >= 0)
	{
		if (str[len] == (unsigned char) c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] && (s2[a]) && (s1[a] == s2[a])))
	{
		a++;
		if ((s1[a] == '\0') && (s2[a] == '\0'))
			return (1);
	}
	return (0);
}
