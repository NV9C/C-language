#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n=0,a=0,i,sum=0;
    int *arr = (int*)malloc(n * sizeof(int));
   
    scanf("%d\n",&n);
    while(n>a)
    {
        scanf("%d\n",&arr[i]);
        sum+=arr[i];
    a++;
    }
    printf("%d\n",sum);
   
    return 0;
}
