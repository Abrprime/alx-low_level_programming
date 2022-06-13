#include "main.h"
/**
 * _strlen -main function
 * @s: parameter
 * Return: size of sting
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
