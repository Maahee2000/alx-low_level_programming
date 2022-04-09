#include<stdio.h>
#include<stdlib.h>

/**
 * main - print the alphabet in lower case
 * follwed by new line, except q and e.
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}

