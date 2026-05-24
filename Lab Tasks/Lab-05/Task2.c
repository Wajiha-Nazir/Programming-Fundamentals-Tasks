#include<stdio.h>
int main()
{
	int power, color;
	printf("\n1=Power On\n0=Power Off\nEnter Status:\t");
	scanf("%d",&power);
	if(power==1)
	{
	   printf("1.Red\n2.Yellow\n3.Green\nEnter Light Color:\t");
	   scanf("%d",&color);
	   if(color==1)
	        printf("Stop");
	   else if(color==2)
	   		printf("Caution");
	   else if(color==3)
  			 printf("Go");
       else
       	     printf("Invalid Input");
	}
	else if(power==0)
		printf("Signal Off");
	else
		printf("Invlaid Input");
   	return 0;
}
