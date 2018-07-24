/*Mergesort*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	
	int i, j, k, n1, n2;
	/*Reading size of first array*/
    scanf("%d",&n1);
    int arr1[n1];
    /*Reading the array elements*/
    for (i = 0; i <n1; i++) 
    {
		scanf("%d", &arr1[i]);
	}
	/*Reading size of second array*/
    scanf("%d",&n2);
    int arr2[n2],res[n1+n2];
    /*Reading the elements of second array*/
	for (i = 0; i <n2; i++)
    {
		scanf("%d", &arr2[i]);
	}

	i = 0;
	j = 0;
	k = 0;

	while (i < n1 && j < n2) 
    {
        /*Comparing the array elemnts of both arrays accordingly if smaller moving to resultant array*/
		if (arr1[i] <= arr2[j])
        {
			res[k] = arr1[i];
			i++;
			k++;
		} else 
        {
			res[k] = arr2[j];
			k++;
			j++;
		}
	}

	 

	while (i < n1) 
    {
		res[k] = arr1[i];
		i++;
		k++;
	}


	while (j < n2) 
    {
		res[k] = arr2[j];
		k++;
		j++;
	}

	/*Printing resultant array*/
	for (i = 0; i<n1 + n2; i++)
		printf("%d ", res[i]);

	return (0);

}
