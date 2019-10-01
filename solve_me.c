#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    
    int c=a+b;
    return c;
}

int main() {
    int n,m;
    scanf("%d",&n);
      scanf("%d",&m);
    int d=solveMeFirst(m,n);
    
    
   printf("%d",d);
    return 0;
}
