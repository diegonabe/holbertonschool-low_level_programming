#include <stdio.h>

/**
 * main - Prints the lowercase in reverse
 *
 * Return : Allways 0 (Success)
 */
int main(void)
{
	char i;
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}

