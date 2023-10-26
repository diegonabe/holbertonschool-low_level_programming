#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Retorna el valor de x elevado a la y
 * @x: El valor del múltiplo
 * @y: Las veces que se multiplica el valor
 *
 * Return: El valor multiplado Y veces.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

