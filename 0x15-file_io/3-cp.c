#include "main.h"

void func_cp(char *file_from, char *file_to)
{
	int src, src_read, dest, dest_write;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	src = open(file_from, O_RDONLY);
	if (src < 0)
	{
		dprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest = open(file_tom O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
	{
		dprintf(stderr, "Error: Can't read from file %s\n", file_to);
		exit(99);
	}
	do {
		src_read = read(src, buf, 1024);
		if (src_read < 0)
		{
			dprintf(stderr, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		dest_write = write(dest ,buf, src_read);
		if (dest_write < src_read)
		{
			dprintf(stderr, "Error: Can't read from file %s\n", file_to);
			exit(99);
		}
	}while (dest_write == 1024);
}
