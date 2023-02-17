#include<stdio.h>
/**
 * main - the program to print all combination of single digit
 * Return: 0
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

