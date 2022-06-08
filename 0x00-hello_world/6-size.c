#include <stdio.h>
/**
 * main - Entry point
 * description: prints out various sizes of c
 * Return: (0)
*/
int main(void)
{
char a;
int b;
int long c;
int long long d;
printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of int: %zu byte(s)\n", sizeof(b));
printf("size of int long: %zu byte(s)\n", sizeof(c));
printf("size of int long long: %zu byte(s)\n", sizeof(d));
printf("size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
