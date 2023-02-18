#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
	{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n+;
	}

putchar('\n');

return (0);
}

