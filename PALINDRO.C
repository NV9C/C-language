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
  sum=sum*10+rem;
  n=n/10;
  }
if(t==sum)
{
  printf("palindrome");
}
else
{
 printf("not palindrome");
}
getch();
}
