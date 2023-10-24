#include "main.h"

/**
 * _print_rev_recursion - Imprime un string al revés
 * @s: El string al revés
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

