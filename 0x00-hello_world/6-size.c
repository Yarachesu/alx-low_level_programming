#include<stdio.h>
/**
 *  main -this code print size of various type
 *  Return:  Always 0
 */
int main(void)
{
printf("Size of a char: %li byte(s)\n", sizeof(char));
printf("size of an int: %li byte(s)\n", sizeof(int));
printf("Size of a long int: %li byte(s)\n", sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
printf("Size of a float: %li byte(s)\n", sizeof(float));
return (0);
}
