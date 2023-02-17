#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
/* Program that prints the alphabet in lowercase */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		i = tolower(i);
		putchar(i);
	}
	putchar('\n');
	return (0);
}
