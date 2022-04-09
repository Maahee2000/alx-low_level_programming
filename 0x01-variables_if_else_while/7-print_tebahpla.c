#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that print lowercase alphabet in reverse,
 * follow with new line.
 *
 * Return: (Always 0)
 */
int main(void)
{
	char (ch);

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
