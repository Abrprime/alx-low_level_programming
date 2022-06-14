#include <stdio.h>
#include "main.h"
/**
 * print_array - function
 *
 * @a: pointer of parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int b = 0;

	if (n > 0)
	{
		while (b < n - 1)
			printf("%d, ", a[b++]);
		printf("%d\n", a[b]);
	}
	else
		printf("\n");
}
