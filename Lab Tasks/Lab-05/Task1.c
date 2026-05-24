#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age:\t");
	scanf("%d",&age);
	if(age<=5)
 	   printf("Free");
    else if(age>65)
    	 printf("Discount");
    else
    	printf("Standard");
   	return 0;
}
