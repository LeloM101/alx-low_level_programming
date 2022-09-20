#include "main.h"

/**
* _strlen -  a function that returns the length of a string.
* @s: An input string
* Return: Nothing
*/
int _strlen(char *s)

{
int m = 0;

while (s[m] != '\0')
m++;

return (m);
}
