#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: memory area parameter
 * @b: constant byte b
 * @n: number of bytes
 * Return: Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	for (; i < n; i++)
		s[i] = '\0';
	return (s);
}
