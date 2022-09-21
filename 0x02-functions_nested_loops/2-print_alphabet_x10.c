#include "main.h"

/**
* print_alphabet_x10 - check description
* Decription: function uses _putchar to print
* prints the alphabet ten times
* Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char x;
int y;
for (y = 0; y < 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
