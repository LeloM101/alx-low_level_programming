#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int d, p;
for (d = 0; d < 100; d++)
{
for (p = 0; p < 100; p++)
{
if (p > d)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
