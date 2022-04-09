#include<stdio.h>
#include<stdlib.h>

/**
 * main - program prints all possible
 * different combination of two digit.
 *
 * Return: (Always 0)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		if (j > i)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
