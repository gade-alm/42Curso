/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:12:32 by gade-alm          #+#    #+#             */
/*   Updated: 2022/03/29 12:20:11 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

char	*get_line(char *line, char *buff)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	temp = line;
	line = (char *)malloc(sizeof(char) * ft_strlen(buff) + ft_strlen(line));
	if (!line)
		return (NULL);
	while (temp && temp[i])
	{
		line[i] = temp[i];
		i++;
	}
	j = 0;
	while (buff[j])
	{
		line[i++] = buff [j];
		if (buff[j++] == '\n')
			break ;
	}
	if (temp)
		free (temp);
	return (line);
}

//Find the next line and save it on another string
// char	*save_next(char *save)
// {
// 	int			i;
// 	int			j;
// 	char		*str;

// 	i = 0;
// 	j = 0;
// 	if (!save)
// 		return (NULL);
// 	while (*save && save[i] != '\n')
// 		i++;
// 	i += 1;
// 	str = malloc(sizeof(char *) * (i + 1));
// 	if (!str)
// 		return (NULL);
// 	while (save[i] && str[j] != '\n')
// 	{
// 		str[j] = save[i];
// 		i++;
// 		j++;
// 	}
// 	str[j] = '\0';
// 	return (str); 
// }

char	*get_next_line(int fd)
{
	char		*line;
	static char	buff[BUFFER_SIZE];

	read = ("text.txt", buff, BUFFER_SIZE);
	return (line);
}
int	main(void)
{
	char	*s;

	s = "teste\nabc";
	printf("save_next:\n");
	printf("%s\n", save_next(s));
	printf("get_line:\n");
	printf("%s", get_line(s));
}
