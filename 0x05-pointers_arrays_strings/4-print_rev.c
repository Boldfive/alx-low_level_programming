#include "main.h"
/**
 *print_rev - print a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: return 0
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - i ; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
