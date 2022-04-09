#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that print all digit numbers of 16,
 * followed by new line.
 *
 * Return: (Always 0).
 */
int main(void)
{
	int i;

	char ch;

	for (i = 48; i > 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
