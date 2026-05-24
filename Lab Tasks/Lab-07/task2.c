#include<stdio.h>

int main()
{
	int arr[10], i, num, count=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Number %d:\t",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the Number You Want To Search:\t");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			count++;
		}
	}
	if(count>0)
 	    printf("You Entered %d Times Number %d",count,num);
	else
		printf("Number Not Found");
		
	return 0;
}
