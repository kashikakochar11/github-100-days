//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cost_price, selling_price, profit, loss, profit_percentage, loss_percentage;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("You made a profit of %.2f\n", profit);
        printf("Profit percentage: %.2f%%\n", profit_percentage);
    }
    else if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("You incurred a loss of %.2f\n", loss);
        printf("Loss percentage: %.2f%%\n", loss_percentage);
    }
    else
    {
        printf("No profit, no loss. You broke even.\n");
    }

    return 0;
}