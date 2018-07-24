/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],n,i,j,t;
    /*Reading the n value*/
    scanf("%d",&n);
    /*Reading the array*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /*sorting done*/
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            /*swap the elements*/
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    /*printing to the output screen*/
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
