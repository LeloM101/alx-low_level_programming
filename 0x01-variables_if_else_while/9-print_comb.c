#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - single digits comma and space
*
* Return: Always 0 (success)
*/

int main(void)
{
int m;

for (m = '0'; m <= '9'; m++)
{
putchar(m);
if (m != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
