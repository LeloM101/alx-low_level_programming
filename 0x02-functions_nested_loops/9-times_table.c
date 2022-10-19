#include "main.h"
/**
* times_table - prints 9 times table
*/

void times_table(void)
{
int num = '0', mult, prod;
while (num <= '9')
{
mult = '0';
while (mult <= '9')
{
prod = num * mult;
while (prod >= '0')
{
_putchar(prod);
prod++;
}
_putchar(',');
_putchar(' ');
mult++;
}
_putchar('\n');
num++;
}
}
