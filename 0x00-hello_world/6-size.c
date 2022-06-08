#include <stdio.h>
/**
 * main - Entry point
 * description: prints out various sizes of c
 * Return: (0)
*/
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of int: %d byte(s)\n", sizeof(int));
printf("size of int long: %d byte(s)\n", sizeof(long int));
printf("size of int long long: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return (0);
}
