/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:12:29 by jlozano-          #+#    #+#             */
/*   Updated: 2023/03/09 20:55:10 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int	fd)
{
	static tBuffer	*buffer;
	char		*line;
	static int	iBufferSize;
	int			ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	
	iBufferSize = BUFFER_SIZE;
	ret = 0;
	while (ret == 0)
	{
		ret = -1;
		ret = read(fd, buffer->cArray, iBufferSize);
		if (ret > 0)
			ret = ft_strchr_gnl(buffer->cArray, '\n');
		if (ret == 0)
			line = ft_strjoin_gnl(line, buffer->cArray, iBufferSize);
		else
			line = ft_strjoin_gnl(line, buffer->cArray, ret);
	}
	return (line);
}