#include <stdio.h>

/**
 * swap_int - Swaps two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* function that swaps values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
