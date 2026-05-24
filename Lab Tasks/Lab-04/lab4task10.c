#include<stdio.h>

int main()
{
	int size, number, crust, price, cost, mode;
	float total, time;
	char cheese, id;
	printf("1.Small\n2.Medium\n3.Large\n");
	printf("Enter Pizza Size:\t");
	scanf("%d",&size);
	printf("\n1 pizza cost: $8 \n2 pizzas cost: $15 \n3 pizzas cost: $21\n");
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
	printf("\n1. Regular Crust: $0 \n2. Thin Crust: $1 \n3. Stuffed Crust: $2\n");
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
	printf("\nDo you want extra cheese? (Y/N): ");
    scanf(" %c", &cheese);
    cheese = toupper(cheese);
    if (cheese == 'Y') 
	   total += 1.50;
	printf("\nEnter Current Time(0-23):\t");
	scanf("%f",&time);
	if(time>=11 && time<=14)
        total-=(total*0.10);
    printf("\nDo You Have Student ID (Y/N):\t");
    scanf(" %c",&id);
    cheese = toupper(cheese);
    if(id == 'Y')
 	    total-=2;
    printf("\n1.Pickup \n2.Delivery:\t");
    scanf("%d",&mode);
    if(mode==2)
        total+=3;
    if(number==3 && crust==3)
        printf("\n\nYou get free garlic bread!\n");
    printf("\nTotal Cost is: %.2f",total);
	return 0;
}
