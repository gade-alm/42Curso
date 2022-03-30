/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:03:28 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/30 17:25:55 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*get_line(char *str)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(*s) * (i + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		s[i] = str[i];
	s[i + 1] = '\0';
	return (s);
}

char	*save_next(char *str)
{
	int			i;
	int			j;
	char		*save;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	save = malloc(sizeof(char *) * (ft_strlen(str) - i + 2));
	if (!save)
		return (NULL);
	i++;
	while (str[i])
		save[j++] = str[i++];
	save[j] = '\0';
	free (str);
	return (save);
}

char	*read_line(int fd, char *str)
{
	char			*buff;
	int				re;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 2));
	if (!buff)
		return (NULL);
	re = 1;
	while (!ft_strchr(str, '\n') && re != 0)
	{
		re = read(fd, buff, BUFFER_SIZE);
		if (re == -1)
		{
			free(buff);
			return (NULL);
		}
			buff[re] = '\0';
			str = ft_strjoin(str, buff);
	}
	free (buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*buff;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	buff = read_line(fd, buff);
	if (!buff)
		return (NULL);
	str = get_line(buff);
	buff = save_next(buff);
	return (str);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("text", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}