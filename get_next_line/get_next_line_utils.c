/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:45 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/30 12:18:07 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
			dst[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
			dst[j++] = s2[i++];
	dst[j] = '\0';
	return (dst);
}
