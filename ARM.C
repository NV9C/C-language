#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
clrscr();
printf("enter number");
scanf("%d",&n);
int t=n;
while(n>0)
{
  rem=n%10;
  sum=sum+(rem*rem*rem);
  n=n/10;
  }
if(t==sum)
{
  printf("armstrong");
}
else
{
 printf("not armstrong");
}
getch();
}

