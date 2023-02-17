#include<stdio.h>
/**
 * main - print the number in hexadecimal
 * Return: 0
 */
int main(void)
{
int number;
char La;
for (number = 0; number < 10; number++)
{
putchar((number % 10) + '0');
}
for (La = 'a'; La <= 'f'; La++)
{
putchar(La);
}
putchar('\n');
return (0);
}
