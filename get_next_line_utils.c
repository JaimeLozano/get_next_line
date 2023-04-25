/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:12:57 by jlozano-          #+#    #+#             */
/*   Updated: 2023/03/09 20:49:00 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strchr_gnl(const char *s, int c)
{
	char	*s_aux;

	s_aux = (char *)s;
	while (*s_aux != (char)c)
	{
		if (*s_aux == '\0')
			return (0);
		s_aux++;
	}
	return ((size_t)(s_aux - s)/sizeof(char));
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *s1, char const *s2, size_t n)
{
	char	*s3;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + n;
	s3 = (char *) malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (n)
	{
		s3[i + j] = s2[j];
		j++;
		n--;
	}
	free(s1);
	s3[i + j] = '\0';
	return (s3);
}