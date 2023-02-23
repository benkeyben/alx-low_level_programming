#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing numbers from 1 to 100 with multiples of
 * replaced by Fizz, multiples of 5 replaced by Buzz and
 * multiples of both 3 and 5 replaced by FizzBuzz
 * @void: no parameter
 * Return: return 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 15 == 0)
			printf("FizzBuzz\t");
		else if (i % 3 == 0)
			printf("Fizz\t");
		else if (i % 5 == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	printf("\n");
	return (0);
}
