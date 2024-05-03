//Q.1 Write a Program to find all the negative elements from a given 1D array.

#include<stdio.h>

main() 
{
    int n, i;

    printf("Enter the array's size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array's elements:\n");
    for (i=0; i<n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array: ");
    for (i=0; i<n; i++) 
	{
        if (a[i]<0) 
		{
            printf("%d, ", a[i]);
        }
    }
    
}