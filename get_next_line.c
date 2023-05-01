/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:12:29 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/01 15:30:56 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	strncpy_gnl(tBuffer *buffer, int fd)
{
	int iBytesReaded;
	int	iBytesToCopy;
	
	iBytesToCopy = strchr_gnl(buffer->cArray + buffer->uiIndex, '\n');
	if (iBytesToCopy == 0)
	{
		iBytesReaded = read(fd, buffer->cArray, BUFFER_SIZE);
		if (iBytesReaded >= 0)
		{
			buffer->cArray[iBytesReaded] = '\0';
			buffer->uiIndex = 0;
		}
		else
			return (0);
		iBytesToCopy = strchr_gnl(buffer->cArray + buffer->uiIndex, '\n');
	}
	return(iBytesToCopy);
}

char	*strnjoin_gnl(char *s1, tBuffer *buffer, int *iLineIndex, int n)
{
	int	iLineStart;

	if (n < 1)
		return(NULL);
	*iLineIndex += n;
	s1 = str_realloc(s1, *iLineIndex);
	if (n >= *iLineIndex)
		iLineStart = 0;
	else
		iLineStart = *iLineIndex - n - 1;
	if (s1)
		buffer->uiIndex += ft_strncpy(s1 + iLineStart, \
						buffer->cArray + buffer->uiIndex, n + 1);
	return (s1);
}

char	*get_next_line(int	fd)
{
	static tBuffer	buffer;
	char			*line;
	unsigned int	uiBytesToCopy;
	int				iBytesReaded;
	int				iLineIndex;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	
	iBytesReaded = BUFFER_SIZE;
	uiBytesToCopy = strncpy_gnl(&buffer, fd);
	line = NULL;
	iLineIndex = 1;
	while (uiBytesToCopy > 0)
	{
		if (uiBytesToCopy > 0)
		{
			line = strnjoin_gnl(line, &buffer, &iLineIndex, uiBytesToCopy);
			if (line == NULL)
				return (NULL);
			if (line[iLineIndex - 2] == '\n')
				return (line);
		}
		uiBytesToCopy = strncpy_gnl(&buffer, fd);
	}
	if (iLineIndex == '\0')
		return (free(line), (char *) NULL);
	return (line);
}