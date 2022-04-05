/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:45:25 by gade-alm          #+#    #+#             */
/*   Updated: 2022/04/04 09:21:29 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char		*buffer;
	int				re;
	char			*line;
	int				i;

	i = 1;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	re = 1;
	while (i)
	{		
		if (!buffer[0])
			re = read(fd, buffer, BUFFER_SIZE);
		if (re > 0)
			line = ft_get_line(buffer, line);
		if (re < 1 || is_newline(buffer))
			break ;
	}
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
		printf("line [%02d]: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}
