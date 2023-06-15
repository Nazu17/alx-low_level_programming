#include <stdio.h>
/**
 * main - A program that print a line using printf function
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of char: %y byte(s)\n", sizeof(char));
printf("Size of int: %y byte(s)\n", sizeof(int));
printf("Size of short: %y byte(s)\n", sizeof(short));
printf("Size of long: %y byte(s)\n", sizeof(long));
printf("Size of long long: %y byte(s)\n", sizeof(long long));
printf("Size of float: %y byte(s)\n", sizeof(float));
printf("Size of double: %y byte(s)\n", sizeof(double));
printf("Size of long double: %y byte(s)\n", sizeof(long double));
return (0);
}
