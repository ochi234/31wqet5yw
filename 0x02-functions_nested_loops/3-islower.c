#include "main.h"

/**
 * _islower - checjs for lower case character
 * @c: The character to be checked
 * Return: 1 for lower cas character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
