#include "main.h"
/**
* times_table - prints 9 times table
*/

void times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
for (mult = 1; mult <= 9; mult++)
prod = num * mult;
}
_putchar(prod);
_putchar(',');
_putchar(' ');
_putchar('\n');
}
