#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
/* Program that prints the alphabet in lowercase and uppercase */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		i = tolower(i);
		putchar(i);
		if (i == 'z')
		{
			i = 'A';
			for (; i <= 'Z'; i++)
			{
				putchar(i);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
