#include <stdio.h>
/**
*main - The entry point
*
*Return: always returns 0
*/
int main(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
