#include<stdio.h>

int main()
{
 	int a,num;
	printf("Enter the number you want to check:\t");
	scanf("%d",&num);
	for(a=2;a<num;a++)
        if(num%a==0)
        break;
	if(a==num)
        printf("\nThe number is a prime number");
	else
		printf("\nThe number is not a prime number");
	return 0;
}
