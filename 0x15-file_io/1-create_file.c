#include "main.h"

/**
 *create_file - Create file
 *@filename: Name of file to create
 *@text_content: Text to add
 *
 *Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		fw = write(fd, text_content, len);
		if (fw < 0)
			return (-1);
	}
	close(fd);

	return (1);
}
