#include "main.h"
/**
 *_isdigit - checks the digit from 0 to 9
 *
 * @c: parmaetr
 *
 * Return: ther return value
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
		return (1);
	else
		return (0);
}
