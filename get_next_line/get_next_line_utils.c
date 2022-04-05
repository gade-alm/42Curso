/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:45 by gade-alm          #+#    #+#             */
/*   Updated: 2022/04/04 14:28:36 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

int	is_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i++])
	{
		if (str[i] == '\n')
			return (1);
	}
	return (0);
}

char	*ft_get_line(char *line, char *buff)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = line;
	line = malloc(sizeof(char) * (ft_strlen(buff) + ft_strlen(line) + 1));
	if (!line)
		return (0);
	while (temp && temp[i])
	{
		line[i] = temp[i];
		i++;
	}
	while (buff[j])
		line[i++] = buff[j++];
	line[i] = '\0';
	if (temp)
		free (temp);
	return (line);
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
