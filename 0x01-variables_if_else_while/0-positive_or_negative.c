#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - Check the number stored in variable is positive or negeative
 * Return : 0 (Sucess)
 */
int main(void)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if n = 0
	prinf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
	return (0);
}
