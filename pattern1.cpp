/*printing the numbers in diagnol position*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,N;
    /*Reading the n value*/
    scanf("%d",&N);
    /*checkig for the diagnol position*/
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
                         /*If found print it to stdout*/
            if(i==j)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
