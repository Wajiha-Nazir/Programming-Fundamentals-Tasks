#include <stdio.h>

int climbStairs(int n);

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int ways = climbStairs(n);
    printf("Number of distinct ways to climb to the top: %d\n", ways);
    return 0;
}

int climbStairs(int n) {
	int i;
    if (n == 1) 
	return 1;
    if (n == 2) 
	return 2;
    int prev2 = 1;  
    int prev1 = 2;  
    int current;
    for (i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
