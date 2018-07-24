
/*Main and opposite diagnol form printing of a given string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*Initialisng the string*/
    char str[50];
    int i,j;
    /*Reading the string*/
    scanf("%s",str);
   for(i=0;i<strlen(str);i++)
   {
       for(j=0;j<strlen(str);j++)
       {
           /*Comparing to find the diagnol and opposite indices  to print out to console*/
           if(i==j||(i+j)==(strlen(str)-1))
           {
               printf("%c",str[j]);
           }
           else
           {
               /*No diagnol element then print blank space*/
               printf(" ");
           }
       }
       printf("\n");
   }
       return 0;

}
