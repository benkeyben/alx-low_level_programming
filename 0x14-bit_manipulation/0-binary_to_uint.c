#include "main.h"

/**
 * binary_to_uintt - A function converts a binary number to
 * to unsigned int.
 * @b: pointer to the binary string number
 *
 * Return: return unsigned int with decimal value
 * of binary nubmer or 0 if errori
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bi_num = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		bi_num = bi_num << 1;
		if (b[i] == '1')
			bi_num += 1;
	}
	return (bi_num);
}
