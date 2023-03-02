#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: number of bytes parameter
 * Return: return the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
