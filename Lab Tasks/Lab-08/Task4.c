#include<stdio.h>

int main()
{
	int booking[3][3]={
	{1, 0, 1},
	{0, 0, 1},
	{1, 1, 0}
	};
	int i,j, count=0, indexi,indexj;
	for(i=0;i<3;i++)
	{
		printf("Row %d: ",i+1);
		for(j=0;j<3;j++)
		{
			printf("%3d",booking[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(booking[i][j]==0)
			{
				indexi=i+1;
				indexj=j+1;
				count++;
				printf("Position of Available Seat is (%d,%d)\n",indexi,indexj);
			}
		}
		printf("\n");
	}
	printf("Number of available seat is %d \n", count);
	return 0;
}





