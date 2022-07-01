#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * main - Entry point
 *
 * Return: Always 0
 * */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
	printf("is greater than 5\n", n);
}
if (n == 0)
{
	printf("is 0\n", n);
}
if (n < 6 )
{
	printf("is less than 6\n", n);
		else 
		printf("is not 0\n", n);
}
return (0);
}
