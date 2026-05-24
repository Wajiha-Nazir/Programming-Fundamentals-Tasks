#include<stdio.h>

int main()
{
	int number, i, even=0, odd=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter %d number:", i);
		scanf("%d",&number);
		if(number%2==0)
  		    even++;
		else
			odd++;
	}
	printf("You entered %d even numbers:\t",even);
	printf("You entered %d odd numbers:\t",odd);
	return 0;
}
