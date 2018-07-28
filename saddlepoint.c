/*program to find whether saddle point is present or not*/
/*Saddle point is nothing but if an element is row minimum and corresponding column maximum


or row maximum and corresponding colum minimum then that particulr value saddle pint will occur*/
#include <stdio.h>

int main()

{
    
int i,j,n,row_min,col_max,index=0;
 
/*Reading the n value from stdin*/   
scanf("%d",&n);
 
/*Initialising the array*/   
int a[n][n];
    
for(i=0;i<n;i++)
    
{
       
 for(j=0;j<n;j++)
        
{
        
scanf("%d",&a[i][j]);
       
 }
    
}
  
/*Initialising both col_max and row_min as a[0][0]*/ 
 row_min=a[0][0];
    
col_max=a[0][0];
    
for(i=0;i<n;i++)
    
{
        
for(j=0;j<n;j++)
        
{
  
/*Finding row minimum and stroing corresponding column index in index*/         
 if(row_min>a[i][j])
            
{
                
row_min=a[i][j];
                
index=j;
            
}
       
}
       
      
 col_max=row_min;
        
if(col_max<a[i][index])
        
{
            
col_max=a[i][index];
            
       
 }
 
/*If both row_in and col_max are same then the yes willbe printed hence saddle point is that particular index value*/       
if(row_min==col_max)
       
 {
        
printf("yes");
        
break;
        
}
        
else
       
 {
        
printf("no");
       
 break;
        
}
    
    
}
   
 
return 0;

}
