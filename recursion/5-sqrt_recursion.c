#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Retorna la raiz cuadrada de un número.
 * @n: numero del que se calcula la raiz cuadrada
 *
 * Return: La raiz cuadrada
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calcula la raiz cuadrada
 * @n: número que calcula la raiz cuadrada
 * @i: número que itera
 *
 * Return: la raíz cuadrada
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

