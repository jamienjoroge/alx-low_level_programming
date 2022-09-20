#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *
 *Return: returns void
 */
void rev_string(char *s)
{

	int size, i, half;
	char temp;

	for (size = 0; s[size] != '\0'; len++)
		;

	i = 0;

	half = size / 2;

	while (half--)
	{
		temp = s[size - i - 1];
		s[size - i - 1] = s[i];
		s[i] = temp;
		i++;
}

}
