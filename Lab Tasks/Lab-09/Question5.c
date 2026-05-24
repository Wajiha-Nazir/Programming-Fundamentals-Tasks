#include <stdio.h>

float totalBill(float foodCost, int people);

int main() {
    float food;
    int people;
    printf("Enter food cost: ");
    scanf("%f", &food);
    printf("Enter number of people: ");
    scanf("%d",&people);
    printf("Total Bill: $%.2f\n", totalBill(food, people));
    return 0;
}

float totalBill(float foodCost, int people) {
    float tax = 0.08 * foodCost;
    float tip = (foodCost > 50) ? 0.15 * foodCost : 0.10 * foodCost;
    float service = (people > 6) ? 0.05 * foodCost : 0;
    return foodCost + tax + tip + service;
}

