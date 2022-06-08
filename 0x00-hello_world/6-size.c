#include <stdio.h>
/**
 * main - Funtion to print out sizes
 * description: prints out the various sizes of c
 * return: (0)
*/
int main(void)
{
char a
int b
int long c
int long long d
printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of int: %zu byte(s)\n", sizeof(b));
printf("size of long int: %zu byte(s)\n", sizeof(c));
printf("size of long long int: %zu byte(s)\n", sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
