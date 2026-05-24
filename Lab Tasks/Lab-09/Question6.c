#include <stdio.h>

void calculateTax(float grossIncome, float *tax, float *netIncome);

int main() {
    float grossIncome, tax, netIncome;

    printf("Enter gross income: ");
    scanf("%f", &grossIncome);
    calculateTax(grossIncome, &tax, &netIncome);

    printf("Tax amount: $%.2f\n", tax);
    printf("Net income: $%.2f\n", netIncome);

    return 0;
}

void calculateTax(float grossIncome, float *tax, float *netIncome) {
    if (grossIncome <= 20000) {
        *tax = 0;
    } 
    else if (grossIncome <= 50000) {
        *tax = 0.10 * (grossIncome - 20000);
    } 
    else {
        *tax = 0.10 * 30000 + 0.20 * (grossIncome - 50000);
    }

    *netIncome = grossIncome - *tax;
}

