#include <stdio.h>
/**
 *main - causes of an infinite loop
 *Return: 0
 */

int main(void)
{
int i;

printf("Infinit loop incoming :(\n");

i = 0;

/*
 *while(i < 10)
 *{
 *Infinit loop - No increase of variables
 *putchar(i);
}
*/
printf("Infinite loop avoided! \\0/\n");
return (0);
}
