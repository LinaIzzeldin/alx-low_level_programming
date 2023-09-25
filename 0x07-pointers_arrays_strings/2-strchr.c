#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - check the code
* @s: string
* @c: charater
* Return: pointer to the first occurrence
*/
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; x < strlen(s); x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
