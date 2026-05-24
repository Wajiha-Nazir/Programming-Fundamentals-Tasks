#include<stdio.h>

int main()
{
	int number, crust, price, cost;
	float total;
	char cheese;
	printf("1 pizza cost: $8 \n2 pizzas cost: $15 \n3 pizzas cost: $21\n");
	printf("Enter Number of Pizzas:\t");
	scanf("%d",&number);
	if(number == 1)
        price=8;
    else if(number == 2)
        price=15;
    else if(number == 3)
        price=21;
    else
		printf("\nInvalid Number of Pizzas");
	printf("1. Regular Crust: $0 \n2. Thin Crust: $1 \n3. Stuffed Crust: $2\n");
	printf("Enter Crust Type:\t"); 
	scanf("%d",&crust);
	if(crust == 1)
        cost=0;
    else if(crust == 2)
        cost=1;
    else if(crust == 3)
        cost=2;
    else
		printf("Invalid Crust Type");
	total=price+cost;
	printf("Do you want extra cheese? (Y/N): ");
    scanf(" %c", &cheese);
    cheese = toupper(cheese);
    if (cheese == 'Y') 
	total += 1.50;
    printf("Total Cost is: %.2f",total);
	return 0;
}
