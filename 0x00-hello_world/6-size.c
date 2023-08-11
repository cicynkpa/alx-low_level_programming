#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char c;
int i;
long int ld;
long long int lld;
float f;
printf("size of char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of int: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("size of long int: %lu byte(s)\n", (unsigned long) sizeof(ld));
printf("size of long long int: %lu byte(s)\n", (unsigned long) sizeof(lld));
printf("size of float: %lu byte(s)\n", (unsigned long)  sizeof(f));
return (0);
}
