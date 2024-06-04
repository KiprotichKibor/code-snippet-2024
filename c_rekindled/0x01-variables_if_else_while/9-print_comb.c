#include <stdio.h>

/**
 * main - prints all single-digit numbers followed by ',' and ' '
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
