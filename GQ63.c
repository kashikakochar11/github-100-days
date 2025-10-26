//To merge two arrays 
#include <stdio.h>  

int main()
{
    int i=0, j=0, k=0, m;

    int arr1[] = {10,30,50,70};
    int arr2[] = {20, 40, 60, 80};
    
    printf("Array 1 is: ");
    for(i=0;i<4;i++)
    {
        printf(" %d",arr1[i]);
    }
    
    printf("\nArray 2 is: ");
    for(j=0;j<4;j++)
    {
        printf(" %d",arr2[j]);
    }

    // Reset i and j to 0 after printing the arrays so they can be used for merging.
    i = 0; 
    j = 0; 

    int merged[8];

    while(i < 4 && j < 4)
    {
        if(arr1[i] < arr2[j])//comparing elements of both arrays
        {
            merged[k] = arr1[i];//storing smaller element in merged array
            i++; k++;
        }
        else
        {
            merged[k] = arr2[j];
            j++; k++;
        }
    }

    while(i < 4)
    {
        merged[k] = arr1[i];//if elements are left in arr1
        i++; k++;
    }

    while(j < 4)
    {
        merged[k] = arr2[j];//if elements are left in arr2
        j++; k++;
    }

    printf("\nMerged array is: \n");
    for(int m=0;m<8;m++)
    {
        printf("%d ",merged[m]);//printing merged array
    }

    printf("\n");

    return 0;
}
