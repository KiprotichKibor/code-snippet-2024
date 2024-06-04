#include <stdio.h>

/**
 * main - prints all alphabetical letters in lowercase except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);

	putchar('\n');
	return(0);
}
