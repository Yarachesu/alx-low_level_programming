#include<stdio.h>
/**
 * main - the programm that print alphabet in lowercase followed by anew line exept q and e
 * Return: 0
 */
int main(void)
{
char La;
for (La = 'a'; La <= 'z'; La++)
{
if (La != 'e' && La != 'q')
{
putchar(La);
}
}
putchar('\n');
return (0);
}
