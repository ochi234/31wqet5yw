#include "main.h"

/**
 * string_toupper - Convert s string to lower  case
 *of a string to upperecase
 * @str: the string to be changed
 * Return: A pointer to changed string
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str([index] -= 32;
	index++;
	}
	return (str);
}
