#include<stdio.h>
#include<stdlib.h>

/**
 * main - print all possible combination of single number,
 * each number end with comma and space.
 *
 * Return:(Always 0.)
 */
int main(void)
{
		int i;

		for (i = '0'; i <= '9'; i++)
		{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

		return (0);
}
