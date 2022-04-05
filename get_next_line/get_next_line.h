/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrieldealmeidatorres <gabrieldealmeid    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:33 by gade-alm          #+#    #+#             */
/*   Updated: 2022/04/04 09:14:59 by gabrieldeal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

int		ft_strlen(const char *str);
int		is_newline(char *str);
char	*ft_get_line(char *line, char *buff);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif