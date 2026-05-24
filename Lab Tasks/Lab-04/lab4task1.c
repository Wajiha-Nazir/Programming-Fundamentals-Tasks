#include<stdio.h>

int main()
{
	int size;
	printf("Enter Pizza Size:\n");
	printf("1.Small\n2.Medium\n3.Large\n");
	scanf("%d",&size);
	switch(size)
	{
		case 1:
			printf("Small");
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
