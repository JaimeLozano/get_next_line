/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:12:29 by jlozano-          #+#    #+#             */
/*   Updated: 2023/03/09 19:39:10 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_next_line(int	fd)
{
	char	cRead;
	char	*sOut;
	int		i;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

	sOut = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!sOut)
		return (0);
	i = 0;
	while (i < BUFFER_SIZE)
	{
		read(fd, &sOut[i], 1);
		if (sOut[i] == '\n')
			return sOut;
		else
			i++;
	}
	if (i == BUFFER_SIZE)
		get_next_line()
	return (sOut);
}