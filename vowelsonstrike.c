/*Program that takes a string input, deletes all vowels from it and prints the result*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
    char str[50],i,j;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
            /*if vowels present skipping to the next letter*/
            if(str[i]=='i'||str[i]=='a'||str[i]=='o'||str[i]=='u'||str[i]=='e'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U')
            {
               
            }
            /*consonants printing as a string*/
            else
            {
                printf("%c",str[i]);
            }
            
        }
    return 0;
}
