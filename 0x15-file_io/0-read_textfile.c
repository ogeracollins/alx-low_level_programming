#include "main.h"

/**
 *read_textfile - Read file
 *@filename: Path of file
 *@letters: Letters to read
 *
 *Return: Letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c;
	int ft, sd;
	char *str;

	if (filename == NULL)
		return (0);
	if (letters <= 0)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	ft = open(filename, O_RDONLY);
	if (ft < 0)
		return (0);

	sd = read(ft, str, letters);
	if (sd < 0)
		return (0);
	str[letters] = '\0';

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	close(ft);

	return (c);

}
