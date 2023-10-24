#include <stdio.h>

/**
 * swap int - Swapea los valores de dos integers
 * @a: Es el primer integer en ser swapeado
 * @b: Es el segundo integer en ser swapeado
 *
 * Retorna 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

