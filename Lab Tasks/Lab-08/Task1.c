#include<stdio.h>

int main()
{
	int avg[3][4]={
	{85, 92, 78, 90},
	{88,76 ,95, 84},
	{90, 85, 88, 92}
	};
	int i, j;
	float sum=0, average;
	for(i=0;i<3;i++)
	{
		printf("Class %d: ",i+1);
		for(j=0;j<4;j++)
		{
			printf("%4d",avg[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		sum+=avg[i][j];
		}
		average=sum/4;
		printf("Average of class %d is %.2f\n",i+1,average);
		sum=0;
	}

	return 0;
}






