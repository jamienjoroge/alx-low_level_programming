#include <stdio.h>
/**
*main -Entry point
*
*Return: Alywasy returns 0
*/
int main(void)
{
char a = 'a';
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
