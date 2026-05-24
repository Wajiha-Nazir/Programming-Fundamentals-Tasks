#include<stdio.h>

int main()
{
	int i,j, chart[5][5],x=0,o=0;
	printf("Classroom Seating Chart:\n");
	printf("=======================\n");
	printf("(x=Student, o=Empty)\n\n");
	for(i=1;i<=5;i++)
	{
		printf("Row %d ", i);
		for(j=1;j<=5;j++)
		{
			if((i+j)%2==0)
			{
				printf("x ");
				x++;
			}
			else
			{
				printf("o ");
				o++;
			}
		}
		printf("\n");
	}
	printf("\nSummary:");
	printf("\nStudent Seated: %d",x);
	printf("\nEmpty Desks: %d",o);
	printf("\nTotal Desks: %d",x+o);
	return 0;
}




