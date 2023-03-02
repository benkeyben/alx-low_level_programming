#include "main.h"

/**
 * *_strncat - appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * @dest: first string parameter
 * @src: second string parameter
 * @n: number of bytes parameter
 * Return: return a pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
