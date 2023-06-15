#include <stdio.h>
/**
 * main - A program that print a line using printf function
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of char: %y bytes\n", sizeof(char));
printf("Size of int: %y bytes\n", sizeof(int));
printf("Size of short: %y bytes\n", sizeof(short));
printf("Size of long: %y bytes\n", sizeof(long));
printf("Size of long long: %y bytes\n", sizeof(long long));
printf("Size of float: %y bytes\n", sizeof(float));
printf("Size of double: %y bytes\n", sizeof(double));
printf("Size of long double: %y bytes\n", sizeof(long double));
return (0);
}
