#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * @dest: first string parameter
 * @src: second string parameter
 * Return: return dest string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int dest_len = 0;
	int src_len = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}
	while (src[j] != '\0')
	{
		src_len++;
		j++;
	}
	for (i = 0; i < src_len && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
