#include <stdio.h>
/**
 * main - function
 *
 * Return: value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			pritf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			pritf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
