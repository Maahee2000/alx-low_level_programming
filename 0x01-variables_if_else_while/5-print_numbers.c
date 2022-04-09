#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that print all single number ofbase 10
 * starting from 0, then followed by new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
