#include "main.h"
/**
*swap_int - swap the values of two integers
*@a: first integer
*@b: second integer
*Return: return 0
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
