#include<stdio.h>

int main(){
	int arr[10],i,max=0,min=0,diff;
	for(i=0;i<10;i++)
	{
		printf("Enter %d Number:\t",i+1);
		scanf("%d",&arr[i]);
		max=arr[0];
		min=arr[0];
	}
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
		else
			min=arr[i];
	}
		printf("Maximum is  %d",max);
	printf("\nMinimum is %d",min);
	diff=max-min;

	printf("\nDifference is %d",diff);
	return 0;
}
