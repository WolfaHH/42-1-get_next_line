/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <ngodard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:17:42 by ngodard           #+#    #+#             */
/*   Updated: 2023/01/15 22:24:31 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	ligne[12000000];
	char	buffer;
	int		i;
	int		j;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	j = read(fd, &buffer, 1);
	i = 0;
	while (j > 0)
	{
		ligne[i++] = buffer;
		if (buffer == '\n')
			break ;
		j = read(fd, &buffer, 1);
	}
	ligne[i] = '\0';
	if (i == 0 && j <= 0)
		return (NULL);
	return (ft_strdup(ligne));
}
