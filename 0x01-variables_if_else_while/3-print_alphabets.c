#include<stdio.h>
/**
 * main - lowercase and uppercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'z'; ch++)
{
putchar('\n');
}
putchar('\n');
return (0);
}
