#include <stdio.h>

/**
 * swap_int - Swaps the volume of two integer.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swapp the volume of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
