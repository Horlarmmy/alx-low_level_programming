#include <stdio.h>

/**
 * main - Prints numbers seperate by a comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i == 57)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
