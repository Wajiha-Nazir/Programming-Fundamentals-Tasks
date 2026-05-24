#include<stdio.h>

int main(){
	int i, j, num,result;
	printf("Enter how many times you want to print:\t");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d:\t",i);
		for(j=1;j<=10;j++)
		{
			result=i*j;
		printf("%4d",result);
		}
		printf("\n");
	}
	return 0;
}
