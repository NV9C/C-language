#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
     int l=strlen(s);
    for(i=0;i<l;i++)
    {
    if(*(s+i)!=' ')
    
        printf("%c",*(s+i));
    
    else
    
        printf("\n");
    
    }
    return 0;
}
