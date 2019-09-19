
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
clrscr();
printf("enter value of a and b");
scanf("%d%d",&a,&b);
for (i=0;i<=5;i++)
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
getch();
}
