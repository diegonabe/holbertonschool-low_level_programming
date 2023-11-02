#include "main.h"

/**
 * print_sign - Imprime el signo de un número
 * @n: El número a ser chequeado
 * Return: 1 para positivo, -1 para negativo, cero u otra cosa.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

