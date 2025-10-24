//Search for an element in an array using linear search.
#include <stdio.h>
int main(){
int array[] = {50,100,150,200,250};
    int i,element;
    printf("Enter element to be searched: ");
    scanf("%d",&element);
    for(i=0;i<5;i++)
    {
        if(array[i]==element)
        {
            printf("Element found at index %d\n",i);
            break;
        }
        if(array[i]!=element && i==4) 
        printf("Element not found\n");
    }
    return 0;

}