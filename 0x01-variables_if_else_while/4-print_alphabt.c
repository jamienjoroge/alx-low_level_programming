#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char x = 0;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'e' || x == 'q')
{
x++;
}
putchar(x);
putchar('\n');
}
return (0);
}
