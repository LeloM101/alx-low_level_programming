#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - using putchar to print all the numbers of base in lowercase
*
* Return: Always 0 (sucess)
*/

int main(void)
{
int d;
char v;

for (d = '0'; d <= '9'; d++)
putchar(d);

for (v = 'a'; v <= 'f'; v++)
putchar(v);
putchar('\n');

return (0);
}
