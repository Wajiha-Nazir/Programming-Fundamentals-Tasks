#include <stdio.h>

int main() 
{
    float budget, expenditure, difference;
    printf("Enter your daily budget: \t");
    scanf("%f", &budget);
    printf("Enter your daily expenditure: \t");
    scanf("%f", &expenditure);
    difference = budget - expenditure;
    if (difference > 0) {
        printf("You saved %.2f today.\n", difference);
    } 
    else if (difference < 0) {
        printf("You overspent %.2f today.\n", -difference);
    } 
    else {
        printf("You spent exactly your budget today. No savings, no overspending.\n");
    }
    return 0;
}

