#include "main.h"

/**
* void print_alphabet_x10(void) - check description
* Decription: prints the alphabet ten times
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
