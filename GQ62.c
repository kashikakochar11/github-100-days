//Reverse an array without taking extra space.
#include <stdio.h>

int main(){
    int array[] = {10,20,30,40,50};
    int i, temp;
    
    for(i=0;i<3;i++)
    {
        temp = array[i];
        array[i] = array[4-i];
        array[4-i] = temp;
    }
    
    printf("Reversed array is: \n");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}