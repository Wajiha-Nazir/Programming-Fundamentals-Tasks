#include <stdio.h>

int main()
{
    int arr[10];
    int i, j;
    for(i = 0; i < 10; i++)
    {
    	printf("Enter ID %d:\t",i+1);
        scanf("%d", &arr[i]);
	}
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] == arr[j])
                arr[j] = -1;  
        }
    }
    printf("\nUpdated IDs (duplicates marked as -1):\n");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

