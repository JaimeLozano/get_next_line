/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:13:07 by jlozano-          #+#    #+#             */
/*   Updated: 2023/03/09 20:50:15 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#endif

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

typedef struct  sBuffer
{
    char    cArray[BUFFER_SIZE + 1];
    unsigned int    uStart;
}   tBuffer;



char    *get_next_line(int fd);
size_t  ft_strchr_gnl(const char *s, int c);
char	*ft_strjoin_gnl(char *s1, char const *s2, size_t  n);
