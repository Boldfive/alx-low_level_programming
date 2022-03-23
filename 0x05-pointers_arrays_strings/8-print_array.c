#include "main.h"
#include <stdio.h>

/**
 *print_array - print n element of an array of intergers
 *@a: A pointer to an int that will be updated/changed
 *@n: return value n
 *Return: return 0
 */

void print_array(int *a, int n)

{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(". ");
}

i++;
}

printf("\n")
;
}
