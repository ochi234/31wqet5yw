#include "main.h"

/**
 * leet - a function that encodes astring into 1337
 * @str: set of string to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *)
{
	int i, j;

	char c[] = "aAeEoOtTlL';

	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for  (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
}
