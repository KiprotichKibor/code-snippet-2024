#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);

	putchar('\n');
	return(0);
}
