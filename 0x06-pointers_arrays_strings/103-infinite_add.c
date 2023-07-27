#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
int i = 0;
int j = 0;
char temp;

while (*(n + 1) != '\0')
{
i++;
}
i--;

for (j = 0; j < i; j++, i--)
{
temp = *(n + j);
*(n + j) = *(n + i);
*(n + i) = temp;
}
}

/**
 * infinite_add - 2 numbers together
 * @n1: text representation of the 1st number to add
 * @n2: text representation of the 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, i = 0, j = 0, digit = 0;
int vall = 0, val2 = 0, temp_tot = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || overflow == 1)
{
if (i < 0)
vall = 0;
else
val2 = *(n2 + j) -'0';
temp_tot = vall + val2 + overflow;
if (temp_tot >= 10)
overflow = 1;
else
overflow = 0;
if (digit >= (size_r - 1))
return (0);
*(r + digit) = (temp_tot % 10) + '0';
digit++;
j--;
i--;
}
if (digit == size_r)
return (0);
*(r + digit) = '\0';
rev_string(r);
return (r);
}
