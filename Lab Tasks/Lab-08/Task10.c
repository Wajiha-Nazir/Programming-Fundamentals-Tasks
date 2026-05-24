#include<stdio.h>

int main()
{
	int i,j, max=0, min=0, indexi, indexj;
	int matrix[3][4]={
	{10,22,33,41},
	{50,65,73,80},
	{91,10,11,12}
	};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",matrix[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			
			if(max<matrix[i][j])
			{
				max=matrix[i][j];
				indexi=i+1;
				indexj=j+1;
			}
		}
	}
		printf("Maximum is %d",max);
		printf("\nIndex is %d,%d",indexi, indexj);
	return 0;
}
