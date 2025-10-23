//Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int array[]={2,10,13,67,41,24,902,11,8};
    int i , even=0,odd=0;
    for(i=0;i<9;i++)
    {
        if(array[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            
            odd=odd+1;
        }
    }
        printf("The number of even elements:%d \nThe number of odd elements:%d", even,odd);
    return 0;
    }
