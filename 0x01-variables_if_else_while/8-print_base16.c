/**
*main - Entry point
*
*Return: Always returns 0
*/
int main(void)
{
int hex1 = '0';
char hex = 0;
for (hex1 = '0'; hex1 <= '9'; hex1++)
{
putchar(hex1);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
