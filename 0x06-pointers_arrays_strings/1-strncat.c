#include"mai.h"

/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
{
	int a;
	int b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
