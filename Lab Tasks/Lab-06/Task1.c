#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter the number you want to print from:\t");
	scanf("%d",&n);
	for(i=n; i>=1;i--)
			 printf("%d\n",i);
	return 0;
}
