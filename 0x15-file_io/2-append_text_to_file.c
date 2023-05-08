#include "main.h"

/**
 *append_text_to_file - Add text to end of file
 *@filename: Name of file
 *@text_content: Text to add to file
 *
 *Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
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
