
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Imprime el mínimo número de monedas para
 *        hacer cambio de una cantidad de dinero.
 * @argc: El num de argumentos que te da el programa.
 * @argv: Un array con punteros a los argumentos.
 *
 * Return: Si el número de argumentos no es exactamente 1 retorna - 1.
 *         Si no, retorna - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
