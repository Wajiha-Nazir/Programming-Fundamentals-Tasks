#include<stdio.h>

int main()
{
	int Price, Quantity, Total_Cost;
	char Product_Name[20];
	printf("Enter Product Name:\t");
	scanf("%s",&Product_Name);
	printf("Enter Price:\t");
	scanf("%d",&Price);
	printf("Enter Quantity:\t");
	scanf("%d",&Quantity);
	Total_Cost=Price*Quantity;
	printf("Total Cost = %d",Total_Cost);
	return 0;
}
