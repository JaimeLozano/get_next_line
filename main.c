#include "get_next_line.h"

/*
/* gcc -Wall -Werror -Wextra -D BUFFER_SIZE=10 main.c get_next_line.h get_next_line.c
*/

int main(void)
{
	FILE *fd;
	char *s;

	fd = fopen("file.txt", "r");

	if (fd != NULL) {
		printf("Opened file succesfully\n");
	}

	s = get_next_line(fd);

	printf("%s\n", s);

	return (0);
}