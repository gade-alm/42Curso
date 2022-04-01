/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:45:25 by gade-alm          #+#    #+#             */
/*   Updated: 2022/04/01 15:41:42 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char				*buffer;
	int					re;
	static char			*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	re = 1;
	while (!is_newline(line) && re != 0)
	{		
		re = read (fd, buffer, BUFFER_SIZE);
		if (re == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[re] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free (buffer);
	line = ft_get_line(line, buffer);
	return (line);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("text", O_RDONLY);
	i = 1;
	while (i < 3)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}
