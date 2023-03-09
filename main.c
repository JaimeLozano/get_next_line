#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*
* gcc -Wall -Werror -Wextra -D BUFFER_SIZE=10 main.c get_next_line.h get_next_line.c
*/

int main(void)
{
	int		fd;
	char	*s;

	fd = open("file.txt", O_RDONLY);

	if (fd != 0) {
		printf("Opened file succesfully\n");
	}

	s = get_next_line(fd);

	printf("%s", s);

	return (0);
}