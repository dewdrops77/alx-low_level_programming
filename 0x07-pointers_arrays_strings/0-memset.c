#include "main.h"

/**
 * _memset - Entry point
 * @b: pointed destination
 * @a: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *b, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		b[i] = a;
	return (b);
}
