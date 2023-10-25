#include <stdio.h>
/**
 * factorial - Calcula el factorial de un número
 * @n: el número que calcula el factorial
 *
 * Return: Valor de un integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

