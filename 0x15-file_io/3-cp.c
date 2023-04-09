#include "main.h"

void input_output_stat(int stat, int fd, char *filename, char mode);
/**
 * main - A function that copies the content of one file to another
 * @argc: number of arguments
 * @argv: arguments passed into the main function
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, sz = 1024, wrote, src_close, dest_close;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	input_output_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	input_output_stat(dest, -1, argv[2], 'W');
	while (sz == 1024)
	{
		sz = read(src, buffer, sizeof(buffer));
		if (sz == -1)
			input_output_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, sz);
		if (wrote == -1)
			input_output_stat(-1, -1, argv[2], 'W');
	}
	src_close = close(src);
	input_output_stat(src_close, src, NULL, 'C');
	dest_close = close(dest);
	input_output_stat(dest_close, dest, NULL, 'C');
	return (0);
}

/**
 * input_output_stat -A function that checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: nothing
 */
void input_output_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

