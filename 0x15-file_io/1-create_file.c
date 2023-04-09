#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: filename.
 * @text_content: content write in  file.
 *
 * Return: 1 or -1 on success or failure respectively
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int sz;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	sz = write(fd, text_content, i);
	if (sz < 0)
		return (-1);
	close(fd);
	return (1);
}
