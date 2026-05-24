#include<stdio.h>

int main()
{
	int number;
	printf("1 pizza cost: $8 \n2 pizzas cost: $15 \n3 pizzas cost: $21\t");
	scanf("%d",&number);
	if(number==1)
       printf("Total Cost of %d pizza is: $8",number);
    else if(number==2)
       printf("Total Cost of %d pizzas is: $15",number);
    else
    	printf("Total cost of %d pizzas is: $21",number);
	return 0;
}
