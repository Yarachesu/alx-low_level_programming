#include<stdio.h>
/**
 *  main -this code print size of various type
 *  Return: Always 0
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
printf("size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
