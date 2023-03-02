#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be checked
 * Return: return an encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = "ol*ea**t";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (leet[j] != '\0')
		{
			if ((str[i] == leet[j] || str[i] == (leet[j] - 32)) && leet[j] != '*')
			{
				str[i] = j + '0';
			}
			j++;
		}
		i++;
	}
	return (str);
}
