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

#include"get_next_line.h"

char	*get_next_line(int fd)
{
	static char	box[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (read(fd, NULL, 0) < 0)
	{
		while (box[i])
			box[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (box[0] || read(fd, box, BUFFER_SIZE))
	{
		line = get_strjoin(line, box);
		if (check_newline(box))
			break ;
	}
	return (line);
}
