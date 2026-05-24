#include<stdio.h>

int main()
{
	int size, number;
	printf("Enter Pizza Size:\n");
	printf("1.Small\n2.Medium\n3.Large\n");
	scanf("%d",&size);
	switch(size)
	{
		case 1:
			printf("Small");
			printf("\nA small pizza costs $8. Ask how many pizzas you want.\t");
			scanf("%d",&number);
			if(number>1)
				printf("Check our multi-pizza deals.");
			else
			printf("Your total is $8.");
			break;
		case 2:
			printf("Medium");
			break;
		case 3:
			printf("Large");
			break;
			default:
			printf("Invalid Size");
	}
	return 0;
}
