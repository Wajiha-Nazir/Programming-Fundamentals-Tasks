#include <stdio.h>

int main()
{
    char categories[3][20] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };
    char items[3][3][30] = {
        {"Spring Rolls", "Garlic Bread", "Soup"},
        {"Grilled Chicken", "Pasta Alfredo", "Beef Burger"},
        {"Ice Cream", "Chocolate Cake", "Fruit Salad"}
    };
    float prices[3][3] = {
        {6.50, 5.00, 7.25},
        {14.00, 12.50, 10.00},
        {4.50, 6.75, 5.50}
    };
    int i, j;
    printf("RESTAURANT MENU\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s:\n", categories[i]);
        printf("---------------------------\n");

        for (j = 0; j < 3; j++)
        {
            printf("%-20s $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }
    printf("BUDGET-FRIENDLY OPTIONS (< $10)=\n");
    int found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (prices[i][j] < 10)
            {
                printf("%-20s $%.2f   (%s)\n",
                       items[i][j], prices[i][j], categories[i]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("No budget-friendly options available.\n");
    return 0;
}

