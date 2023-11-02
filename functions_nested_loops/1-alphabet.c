#include "main.h"

/**
 * print_alphabet - imprime alphabet
 * Return: Void
 */

void print_alphabet(void)
{
	/*esta función imprime con putchar el alfabeto*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}

