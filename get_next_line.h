/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:13:07 by jlozano-          #+#    #+#             */
/*   Updated: 2023/02/28 23:46:54 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#endif

#include "get_next_line_utils.c"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


char *get_next_line(int fd);