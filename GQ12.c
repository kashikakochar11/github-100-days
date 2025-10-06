//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int main()
{
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number)!= 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number > 0)
    {
        printf("%d is positive.", number);
    }
    else
    {
        if (number < 0)
        {
            printf("%d is negative", number);
        }
        else
        {
            printf("The number is zero.");
        }
    }

    return 0;
}