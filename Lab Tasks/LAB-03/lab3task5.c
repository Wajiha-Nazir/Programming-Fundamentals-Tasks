#include<stdio.h>

int main()
{
	float height, foot, inch;
	printf("Enter your Height in centimeters: \t");
	scanf("%f",&height);
	foot=height/30.48;
	inch=height/2.54;
	printf("Your Height in Foot is: %f",foot);
	printf("\nYour Height in Inches is : %f",inch);
	return 0;
}
