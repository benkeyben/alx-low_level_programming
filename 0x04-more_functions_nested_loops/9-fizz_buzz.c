#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - printst the number from 1 to 100 folowed by a
 * new line
 * @void: no parameter
 * Return: no return
*/
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf("%c", ' ');
	}
}
