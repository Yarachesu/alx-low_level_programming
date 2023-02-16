#include<stdio.h>
/**
 *  main -this code print size of various type
 *  Return:0
 */
int main(void)
{
	char y;
	int d;
	long int r;
	long long int l;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(y));
printf("size of an int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(r));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
