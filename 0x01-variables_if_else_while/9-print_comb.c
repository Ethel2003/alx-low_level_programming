#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
