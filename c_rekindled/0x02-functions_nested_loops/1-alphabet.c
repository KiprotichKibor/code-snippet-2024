#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);

	_putchar('\n');
}
