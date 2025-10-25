//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main()
{
    // Initialize variables with easy and clear names
    int num, digit, maxCount = 0, resultDigit = -1;
    int counts[10] = {0}; // Counts for digits 0 through 9

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("The digit that occurs the most is: 0 (occurs 1 times)\n");
        return 0;
    }

    // Count occurrences of each digit
    while (num > 0)
    {
        digit = num % 10;
        counts[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++)
    {
        if (counts[i] > maxCount)
        {
            maxCount = counts[i];
            resultDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", resultDigit, maxCount);

    return 0;
}