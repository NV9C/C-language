#include<stdio.h>
void main()
{
char a[100];
int j,c,i;
clrscr();
printf("enter string:\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c=1;
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
c++;
a[j]='`';
}
}
if(a[i]!='`')
printf("\n %c appear : %d ",a[i],c);
getch();
}
}