#include <stdio.h>

float calculateRentalCost(int rental_days, float kilometers);

int main()
{
    int days;
    float kilometers, cost;
    printf("Enter Rental Days:\t");
    scanf("%d", &days);
    printf("Enter Kilometers:\t");
    scanf("%f", &kilometers);
    cost = calculateRentalCost(days, kilometers);
    printf("\nFinal rental cost: %.2f\n", cost);
    return 0;
}

float calculateRentalCost(int rental_days, float kilometers)
{
    float base_rate = 40.0, total_cost, extra_km = 0.0;
    total_cost = rental_days * base_rate;
    float allowed_km = rental_days * 100.0;
    if (kilometers > allowed_km) {
        extra_km = kilometers - allowed_km;
        total_cost += extra_km * 0.25;
    }
    if (rental_days >= 7) {
        total_cost *= 0.90;  
    }
    return total_cost;
}

