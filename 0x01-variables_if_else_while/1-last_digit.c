#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-find out the last digit of the number 
* compare the last digit of the number
*Return: retern one of the 3 option
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("last digit of %d and is greater than 5\n", n);
	}
	else if (lastDigit == 0)
	{
		printf("last digit of %d and is 0\n", n);
	}
	else 
		printf("last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}

