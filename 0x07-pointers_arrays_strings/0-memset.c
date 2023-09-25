#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: constant byte
 * @n: the size of the memory to print
 *
 * Return: pointer to memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++, n--)
		s[x] = b;
	return (s);
}
