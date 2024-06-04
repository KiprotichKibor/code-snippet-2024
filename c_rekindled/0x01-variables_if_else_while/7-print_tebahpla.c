#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return(0);
}
