#include "main.h"
/**
 * factorial - main funtion
 * @n: parameter
 * Return: value
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 1 || n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
