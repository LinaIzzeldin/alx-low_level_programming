#include "main.h"

/**
 *_strncat - concatenates two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at the end of dest
 *@n : integer parameter to compare index to
 *Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; y < n && src[y] != 0; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return(dest);
}
