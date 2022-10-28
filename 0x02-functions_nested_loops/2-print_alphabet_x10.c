#include"main.h"

/**
 * print_alphabet_x10 - This program print alphabet,
 * fr0m a to z 10x in lower case.
 *
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
