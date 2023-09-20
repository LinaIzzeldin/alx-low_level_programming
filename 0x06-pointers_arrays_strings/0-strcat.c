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
int size = 0;
int i,j;

for (i = 0; src[i] != '/0'; i++)
	size = size + 1;
for (j = 0; dest[j] != '/0' ; j++)
	src[i] = dest[j];
return (dest);
}
