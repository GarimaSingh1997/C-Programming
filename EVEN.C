#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 printf("Enter a number to check wheather it is even or not");
 scanf("%d",&a);
 if(a%2==0)
 {
  printf("Number is even");
 }
 else
 printf("Number is odd");
 getch();
}