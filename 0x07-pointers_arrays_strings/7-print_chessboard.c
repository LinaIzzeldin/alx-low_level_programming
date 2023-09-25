#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: pointer
 *
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k, l;
	int x = sizeof(*a) / sizeof(*a[0]);

	for (k = 0; k < x; k++)
	{
		for (l = 0; l < x; l++)
		{
			putchar(a[k][l]);
		}
		putchar('\n');
	}
}
