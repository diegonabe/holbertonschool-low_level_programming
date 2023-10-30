#include "main.h"

/**
 * _ puts - imprime un string
 * @str: El string que se va a imprimir
 * Return: Void.
 */

void _puts(char *str)
{
	for (; *str !='0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

