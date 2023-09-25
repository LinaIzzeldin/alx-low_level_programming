#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: memory area
 * @src: constant byte
 * @n: the size of the memory to print
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++, n--)
	{
		dest[x] = src[x];
	}
	return (dest);
}

