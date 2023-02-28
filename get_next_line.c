/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:12:29 by jlozano-          #+#    #+#             */
/*   Updated: 2023/02/28 23:46:59 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int	fd)
{
	char	cRead;
	char	*sWrite;
	int		i;
	int		ret;
	
	

	sWrite = (char *)malloc(BUFFER_SIZE * sizeof(char));

	i = 0;
	ret = read(fd, &cRead, 1);
	while ((cRead != '\n') && i < BUFFER_SIZE)
	{
		*sWrite++ = cRead;
		i++;
		read(fd, &cRead, 1);
	}
	return (sWrite);
}