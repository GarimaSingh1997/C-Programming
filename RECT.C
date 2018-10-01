#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 int area,peri;
 printf("Enter the length and width of a rectagle");
 scanf("%d%d",&a,&b);
 area=a*b;
 peri=2*(a+b);
 printf("Area and perimeter of the rectangle is %d and %d ",area,peri," respectively");
 getch();
}