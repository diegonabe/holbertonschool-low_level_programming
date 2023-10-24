#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Imprime un string seguido de una nueva línea
 * @s : el string para imprimir
 *
 * Return cero
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

