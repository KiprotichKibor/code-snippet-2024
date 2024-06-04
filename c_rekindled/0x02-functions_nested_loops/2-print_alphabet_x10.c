#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase using _putchar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j <= 10 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
