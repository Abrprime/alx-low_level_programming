#include "main.h"
/**
 * _memset - main functin
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
