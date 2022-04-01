/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:33 by gade-alm          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/01 15:11:12 by gade-alm         ###   ########.fr       */
=======
/*   Updated: 2022/03/30 16:35:50 by gade-alm         ###   ########.fr       */
>>>>>>> ec847f38b17c8c191f04905826e664af17bc5eb4
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

<<<<<<< HEAD
size_t	ft_strlen(const char *str);
int		is_newline(char *str);
char	*ft_get_line(char *line, char *buff);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
=======
char	*ft_strchr(const char *s, int c);
char	*get_line(char *str);
char	*read_line(int fd, char *str);
char	*save_next(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
>>>>>>> ec847f38b17c8c191f04905826e664af17bc5eb4

#endif