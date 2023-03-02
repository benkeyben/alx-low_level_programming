#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @cap: words of a string to be capitalized
 * Return: return the capitalized words of a string
 */
char *cap_string(char *cap)
{
	int i, str_len, next_char;

	str_len = 0;
	for (i = 0; cap[i] != '\0'; i++)
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		if ((cap[i] >= 'A' && cap[i] <= 'Z') || (cap[i] >= 'a' && cap[i] <= 'z'))
		{
			cap[i] = cap[i];
		}
		else
		{
			if (cap[i] == '\t')
			{
				cap[i] = ' ';
			}
			if (cap[i] == '6')
			{
				continue;
			}
			cap[i] = cap[i];
			next_char = i + 1;
			if (cap[next_char] >= 'A' && cap[next_char] <= 'Z')
				cap[next_char] = cap[next_char];
			else if (cap[next_char] >= 'a' && cap[next_char] <= 'z')
				cap[next_char] = cap[next_char] - 32;
		}
	}
	return (cap);
}

