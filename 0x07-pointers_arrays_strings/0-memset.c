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
	unsigned int i;
	char *start = s;
	
	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}	
}	return (start);
