
#include <stdio.h>

/**
 * main - Imprime nums del 1 al 100
 *        Fizz se imprimpe si es mult de 3
 *        Buzz, se imprime si es mult de 5
 *        FizzBuzz se imprime si es mult de 3 y 5
 *
 * Return: num 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
