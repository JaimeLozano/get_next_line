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

void	get_sShort(int	fd, char *sShort, int iBufferSize)
{
	int			i;
	
	read(fd, &sShort[i], BUFFER_SIZE);
	while (sShort[i] != '\n')
	{
		read(fd, &sShort[i], 1);
		if (sShort[i] == '\n')
			break;
		else
			i++;
	}
	
}

void	append_sShort2sLong(char *sShort, char *sLong)
{
	sLong = 
}

char	*get_next_line(int	fd)
{
	static char	*sShort;
	char		*sLong;
	int			rd_bytes;
	static int	iBufferSize;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	
	iBufferSize = BUFFER_SIZE;
	
	while (1)
	{
		get_sShort(fd, sShort, iBufferSize);
		if (sShort[ft_strlen(sShort) - 1] == '\n')
			break;
		append_sShort2sLong(sShort, sLong);
		ft_strjoin(sShort, sLong);
	}
	ft_strjoin(sShort, sLong);
	
	sShort = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!sShort)
		return (0);

	if (i == BUFFER_SIZE)
		get_next_line()
	return (sShort);
}