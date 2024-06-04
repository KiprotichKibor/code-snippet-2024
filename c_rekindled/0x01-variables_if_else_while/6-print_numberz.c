#include <stdio.h>

/**
 * main - prints numbers 1-9 using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return(0);
}
