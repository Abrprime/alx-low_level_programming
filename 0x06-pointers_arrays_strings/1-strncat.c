#include "main.h"
/**
 * _strncat - main function
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 *Return: return value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
