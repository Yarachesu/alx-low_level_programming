#include<stdio.h>
/**
 * main - the programm to print single digits in base 10
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
