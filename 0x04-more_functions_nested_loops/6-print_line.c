#include <stdio.h>

/**
 * print_line - A function that draws a
 * straight line in the terminal.
 * @n: length of the line
 */

void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}

	if (n <= 0)
		putchar('\n');
}
