#include<stdio.h>
/**
 * main - to print the alphabet in reverse
 * Return: 0
 */
int main(void)
{
char Le;
for (Le = 'z'; Le >= 'a'; Le--)
{
putchar(Le);
}
putchar('\n');
return (0);
}
