#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Devuelve el numero si es primo
 * @n: el numero a ser chequeado
 *
 * Return: Un valor int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Chequea si el numero es primo
 * @n: el numero a ser chequeado
 * @i: el numero de veces que se itera
 * Return: 1 si es primo y 0 si es compuesto
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

