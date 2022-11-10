#include "main.h"
/**
* _strpbrk - searches a string for any set of bytes
* @s: the string to be searched
* @accept: The set of bytes to be searched
* Return: a pointer to the byte or null if it did not match
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
