#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
	int n, i;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(*(n + a) + i));
		}
	_putchar('\n');
	}
}
