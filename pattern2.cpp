/*program to display the following patterm*/
/*
    1
   12
  123
 1234
12345
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {    
         /*printing balnk space till size-i*/
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
           
        }
        /*printing value at position j*/
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
