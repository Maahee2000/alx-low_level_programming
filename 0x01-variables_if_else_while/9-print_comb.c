#include<stdio.h>
#include<stdlib.h>

/**
 * main - to print all possible combination of number,
 * each nuber end withcomma and space.
 *
 * Return:(Always 0.)
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
