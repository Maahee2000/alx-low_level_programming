#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that print all sigle digit number of
 * base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
