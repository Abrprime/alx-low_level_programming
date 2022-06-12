#include "main.h"
/**
 * _isalpha - main function
 * @c: parameter
 * Return: value
 */
int _isalpha(int c)
{
	if (65 <= c >= 90 || 97 <= c >= 122)
		return (1);
	else
		return (0);
}
