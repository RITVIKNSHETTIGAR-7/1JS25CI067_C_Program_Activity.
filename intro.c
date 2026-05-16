#include <stdio.h>
int main()
{
 printf("Name: YOUR NAME\n");
 printf("USN: YOUR USN\n");
 printf("Program: Simple Addition of Two Numbers\n");
 printf("----------------------------------------\n");
 int a, b, sum;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 sum = a + b;
 printf("Sum = %d\n", sum);
 return 0;
}
