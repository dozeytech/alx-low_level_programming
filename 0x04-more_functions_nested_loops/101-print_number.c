#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	long p; /* power of 10 */
	int c; /* boolean check */
	long num; /* convert int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	p = 1;
	c = 1;
	while (c)
	{
		if (num / (p * 10) > 0)
			p *= 10;
		else
			c = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (p == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / p % 10) + '0');
			p /= 10;
		}
	}
}
