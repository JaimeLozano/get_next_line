#include "get_next_line.h"

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