#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string pointer
 * @needle: string
 *
 * Return: pointer to located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *x;

	x = strstr(haystack, needle);
	return (x);
}
