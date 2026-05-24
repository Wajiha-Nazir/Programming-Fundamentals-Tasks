#include <stdio.h>

float calculateTotal(float order, float weight);

int main() {
    float order, weight;
    printf("Enter order amount: ");
    scanf("%f", &order);
     printf("Enter order package weight: ");
    scanf("%f", &weight);
    printf("Total Cost: $%.2f\n", calculateTotal(order, weight));
    return 0;
}

float calculateTotal(float order, float weight) {
    if (order > 100)
        return order;
    else if (weight < 2)
        return order + 10;
    else if (weight <= 5)
        return order + 15;
    else
        return order + 20;
}

