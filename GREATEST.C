#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the 3 element to check Greatest");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("Greatest is %d",a);
else if((b>a)&&(b>c))
printf("Greatest is %d",b);
else if((c>b)&&(c>a))
printf("Greatest is %d",c);
getch();
}
