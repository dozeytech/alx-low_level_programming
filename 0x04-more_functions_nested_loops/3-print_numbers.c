#include "main.h"
/**
 * print_numbers - function that print numbers 0-9
 *
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}

