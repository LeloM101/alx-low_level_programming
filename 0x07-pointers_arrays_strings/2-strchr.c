#include "main.h"
/**
* _strchr - locates a character in a string
* @s: the string
* @c: first occurrence of the string
* Return: c or null if character is not found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
