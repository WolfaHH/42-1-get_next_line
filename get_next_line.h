/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <ngodard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:17:59 by ngodard           #+#    #+#             */
/*   Updated: 2023/01/15 22:24:50 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include<unistd.h>
# include<stdlib.h>

char	*get_next_line(int fd);
char	*get_strjoin(char *line, const char *box);
int		check_newline(char *box);
size_t	ft_strlen(const char *s);

#endif