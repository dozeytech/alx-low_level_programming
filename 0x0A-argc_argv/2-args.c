#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

