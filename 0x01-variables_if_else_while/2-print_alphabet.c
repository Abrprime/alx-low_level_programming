#include <stdio.h>
/**
 * main - print alphabet
 */
int main(void)
{
        char alp;

        for (alp = 'a'; alp <= 'z'; ++alp)
        {
                putchar(alp);
        }
	putchar('\n');
    return (0);
}
