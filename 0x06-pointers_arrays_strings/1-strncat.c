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
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
