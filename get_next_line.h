/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:13:07 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/01 15:36:22 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
	#define GET_NEXT_LINE_H
#endif

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

typedef struct  sBuffer
{
    char			cArray[BUFFER_SIZE + 1];
    unsigned int	uiIndex;
}   tBuffer;

char    *get_next_line(int fd);
int	    strchr_gnl(const char *s, const char c);
char	*strnjoin_gnl(char *s1, tBuffer *buffer, int *iLineIndex, int  n);
size_t	ft_strlen(const char *s);
char	*str_realloc(char *str, size_t size);
int 	ft_strncpy(char *dst, const char *src, size_t dstsize);