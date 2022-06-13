#include "main.h"
/**
 * swap_int - main function
 * @a: paramer
 * @b: paramer
 * Return: value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
