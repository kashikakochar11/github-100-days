/// to calculate lcm of two numbers
#include <stdio.h>

int main()
{
    int num1, num2, max;//declare variables

    printf("Enter two numbers: ");//take input
    scanf("%d,%d", &num1,&num2);
    if (num1 > num2)//compare numbers
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    while (1)//apply loop
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        // error check:Increment max in each iteration until the LCM is found
        max++;
    }

    return 0;
}