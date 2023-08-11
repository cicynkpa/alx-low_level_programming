#include <stdio.h>
/**
 * main - Writing a C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
int i;
char c;
float f;
double d;
long int ld;
long long int lld;
printf("size of int is: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("size of c is: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of f is: %lu byte(s)\n", (unsigned long)  sizeof(f));
printf("size of double is: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of long int is: %lu byte(s)\n", (unsigned long) sizeof(ld));
printf("size of long long int is: %lu byte(s)\n", (unsigned long) sizeof(lld));
return (0);
}
