//Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int array[]={12,45,7,23,89,4,67};
    int i, max=0,min=array[0];
    for(i=0;i<7;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min )
        {
            min=array[i];
        }
    }
    printf("The maximum element:%d \n The minimum element:%d", max,min);
    return 0;
}