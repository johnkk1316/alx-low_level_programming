#include "main.h"

/**
 * swap_int - swap values of two nums
 * @b: first pointer
 * @a: second pointer
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
