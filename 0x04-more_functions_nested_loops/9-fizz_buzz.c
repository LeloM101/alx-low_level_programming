#include "stdio.h"
/**
* main - prints 1 to 100
* prints fizz for multiples of three
* prints buzz for multples of 5
*Return: Always (0)
*/
int main(void)
{
int i = 1;
for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
printf("Fizz ");
if (i % 5 == 0 && i % 3 != 0)
printf("Buzz ");
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 != 0 && i % 5 != 0)
printf("%d", i);
printf(" ");
}
printf("Buzz\n");
return (0);
}
