#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter values");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d\n%d",a,b);
getch();
}