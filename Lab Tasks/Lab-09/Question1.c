#include <stdio.h>

float processTransaction(float remainingLimit, float transactionAmount);

int main() {
    float remainingLimit = 5000.0;  
    float transactionAmount;
    printf("Enter transaction amount: ");
    scanf("%f", &transactionAmount);
    remainingLimit = processTransaction(remainingLimit, transactionAmount);
    return 0;
}

float processTransaction(float remainingLimit, float transactionAmount) {
    if (transactionAmount <= remainingLimit) {
        remainingLimit -= transactionAmount;
        printf("Transaction APPROVED!\n");
        printf("New remaining limit: %.2f\n", remainingLimit);
    } else {
        printf("Transaction DECLINED! Exceeds remaining limit.\n");
        printf("Remaining limit unchanged: %.2f\n", remainingLimit);
    }
    return remainingLimit;
}

