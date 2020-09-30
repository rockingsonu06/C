/*C program to add two numbers using functions of
type with no arguments and no return type*/

#include<stdio.h>
void sum();
void main()
{
  sum();
}
void sum()
{
  int a,b,sum;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("value of first number=%d");
  printf("Enter second number:");
  scanf("%d",&b);
  printf("value of second number=%d");
  sum=a+b;
  printf("Sum of two numbers=%d",sum);
}
