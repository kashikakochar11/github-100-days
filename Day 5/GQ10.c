// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{

    int totalSeconds, hours, minutes, seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate the number of hours.
    // There are 3600 seconds in an hour (60 minutes/hour * 60 seconds/minute).
    hours = totalSeconds / 3600;

    minutes = (totalSeconds % 3600) / 60;

    seconds = totalSeconds % 60;

    printf("The time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}
