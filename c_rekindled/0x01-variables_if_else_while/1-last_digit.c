#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("The last digit of %d is %d and is greater than 5", n, x);
	else if (x == 0)
		printf("The last digit of %d is %d and is 0", n, x);
	else
		printf("The last digit of %d is %d and is less than 6 and not 0", n, x);

	printf("\n");
	return (0);
}
