#include <stdio.h>

void moveZeroes(int* nums, int numsSize);

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Output: [");
    for(i = 0; i < n; i++) 
	{
        printf("%d", nums[i]);
        if(i < n - 1) 
		   printf(", ");
    }
    printf("]\n");
    return 0;
}

void moveZeroes(int* nums, int numsSize) 
{
    int index = 0, i;  
    for(i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }
    while(index < numsSize) {
        nums[index++] = 0;
    }
}
