#include "main.h"
/**
 * _islower - main function
 *
 * @c: parameter
 *
 * Return: value
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
		return (0);
}
