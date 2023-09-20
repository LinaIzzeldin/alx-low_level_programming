#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*returns zero if s1 == s2
*returns negative number if s1 < s2
*returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int difference;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			difference = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;	
		}
		s1++;
		s2++;
	}
	return (difference);
}
