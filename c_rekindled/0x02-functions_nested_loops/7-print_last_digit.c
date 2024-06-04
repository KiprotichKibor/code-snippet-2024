#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * n: the number in which the last digit is to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int t;

	t = n % 10;
	if (n < 0)
		t = -t;
	_putchar(t + '0');
	return(t);
}
