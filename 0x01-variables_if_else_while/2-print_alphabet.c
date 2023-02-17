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
	char str_upper[30] = "BENJAMINYANKEYADLLHDAFLHDLH";
	int i;

	for (i = 0; i <= 30; i++)
	{
		putchar(tolower(str_upper[i]));
	}
	return (0);
}
