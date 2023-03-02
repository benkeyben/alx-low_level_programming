#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of
 * a string to uppercase
 * @u: string to be changed
 * Return: return the result of changed letters
 */
char *string_toupper(char *u)
{
	int i, str_len;

	str_len = 0;
	for (i = 0; u[i] != '\0'; i++)
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		if (u[i] >= 'A' && u[i] <= 'Z')
			u[i] = u[i];
		else if (u[i] >= 'a' && u[i] <= 'z')
			u[i] = u[i] - 32;
	}
	return (u);
}
