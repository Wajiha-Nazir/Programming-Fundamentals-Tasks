#include<stdio.h>

int main()
{
	int number, crust, total;
	printf("1 pizza cost: $8 \n2 pizzas cost: $15 \n3 pizzas cost: $21\t");
	scanf("%d",&number);
	printf("1. Regular Crust: $0 \n2. Thin Crust: $1 \n3. Stuffed Crust: $2\n");
	printf("Enter Crust Type:\t");
	scanf("%d",&crust);
    total=number+crust;
    printf("Total Cost is: %d",total);
	return 0;
}
