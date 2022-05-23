/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:08:53 by gade-alm          #+#    #+#             */
/*   Updated: 2022/05/23 17:20:29 by gade-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# define __USE_POSIX 1
# define __USE_POSIX199309 1
# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>

void	    print_message(char *str);
void	char_to_binary(char c, int pid);
int         ft_atoi(const char *str);

#endif