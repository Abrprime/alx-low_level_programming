#include <stdio.h>
/**
 * main - print alphabet
 */
int main(void)
{
        char alp;

	while (alp <= 'z')
	{       
		alp = 'a';
                putchar(alp);
		alp = ++alp;
	}
	putchar('\n');
	
    return (0);
}
