/*Quicksort*/

#include<stdio.h>

#include<math.h>


void quicksort(int number[],int first,int last)

{
 
    /*pivot is the highest index element*/

    int i, j, pivot, temp;
 
    /*i and j are indices of the elements*/
  
  if(first<last)
 {
      
   pivot=first;

   i=first;
   
   j=last;
      
  while(i<j)
   {
        
    while(number[i]<=number[pivot]&&i<last)
 
      i++;
         
     while(number[j]>number[pivot])
   
      j--;
           
/*If fast is less than last then swap can be done*/
   
       if(i<j)
       {
            
          temp=number[i];
     
         number[i]=number[j];
     
         number[j]=temp;
      
      }
     
   }

     
temp=number[pivot];
  
number[pivot]=number[j];
    
number[j]=temp;
   
quicksort(number,first,j-1);
  
quicksort(number,j+1,last);

  
 }

}


int main()
{
   
   int i,n;
    
 /*readinf size of the array to sort*/
 
  scanf("%d",&n);
     
  int number[n];
    
  for(i=0;i<n;i++)
 
    number[i]=rand()%10;
 
    /*Applying sort for the elements*/

    quicksort(number,0,n-1);
   
    for(i=0;i<n;i++)
    
    printf("%d ",number[i]);
   
    return 0;

}