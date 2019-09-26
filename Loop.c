#include <stdio.h>
#include <string.h>
#include <math.h>
int main() 
{
    int a, b,n;
    scanf("%d\n%d", &a, &b);
    char *ar[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(n=a;n<=b;n++)
    {
       if(n<=9)
        {
            printf("%s\n",ar[n-1]);
        }
        else
         {
        printf("%s\n",ar[9+(n%2)]);
        }
    }
    return 0;
}
