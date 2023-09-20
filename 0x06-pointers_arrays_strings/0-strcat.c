#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will append
 *@src: string that will be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int x, y;

c = 0;
while (dest[c])
	c++;
for (y = 0; src[y] ; y++ )
	dest[c++] = src[y];
return (dest);
}
