#include <stdio.h>

/**
 * main - Print the first 52 fibonacci numbers
 * Retur: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	print(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %l", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
