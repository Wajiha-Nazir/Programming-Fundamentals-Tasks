#include<stdio.h>

int main()
{
	float Radius, Area, Circumference;
	printf("Enter Area of Circle:\t");
	scanf("%f",&Radius);
	Area=3.1415*Radius*Radius;
	Circumference=2*3.1415*Radius;
	printf("Area of Circle is %f",Area);
	printf("\nCircumference of Circle is %f",Circumference);
	return 0;
}
