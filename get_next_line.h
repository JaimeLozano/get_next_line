/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:13:07 by jlozano-          #+#    #+#             */
/*   Updated: 2023/03/08 20:20:46 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#endif

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

#include "get_next_line_utils.c"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


char *get_next_line(int fd);