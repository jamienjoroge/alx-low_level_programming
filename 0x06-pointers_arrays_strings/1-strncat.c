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
	int counter = 0, srcLength = 0;
	char *temp = dest;

	while (*(src + srcLength) != '\0')
		srcLength++;
	while (*dest)
		dest++;
	if (n > srcLength)
		n = srcLength;
	while (counter < n)
	{
		*dest++ = *src++;
		counter++;
	}
	*dest = '\0';
	return (temp);
}
