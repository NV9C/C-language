
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,i,n;
clrscr();
printf("enter number of terms");
scanf("%d",&n)
 printf("fibonaci series are:");
for (i=0;i<=n;i++)
{
 printf("%d",a);
c=a+b;
a=b;
b=c;
}
getch();
}
