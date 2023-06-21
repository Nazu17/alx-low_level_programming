#include <main.h>
/**
 * Main - Write the character c to stdout
 * Description - To print the character
 * Return: 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar\n";
    write(STDOUT_FILENO, str, sizeof(str) - 1);
    return 0;
}
