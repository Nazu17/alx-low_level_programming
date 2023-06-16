#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - print the last digit of the number
 * Return: 0 upon successful execution
*/
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
n = n % 10;
if (n > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, n);
}
else if (n == 0)
{
	printf("last digit of %d is %d and is 0\n", n, n);
}
else
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, n);
}
return (0);
}
