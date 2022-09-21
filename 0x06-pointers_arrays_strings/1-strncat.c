#include "main.h"
/**
 *_strncat - concatenatesregardless of '\0'
 *@dest: initial and final string
 *@src: string to be added
 *@n: max number of bytes from src
 *
 *Return: returns a character string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	while (dest[len] != 0)
	{
		len++;
	}
	for (i = 0; src[i] < n; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
}
