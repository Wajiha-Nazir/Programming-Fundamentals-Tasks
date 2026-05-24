#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,D,x1,x2;
	printf("Enter the value of a:\t");
	scanf("%f",&a);
	printf("Enter the value of b:\t");
	scanf("%f",&b);
	printf("Enter the value of c:\t");
	scanf("%f",&c);
	D=((b*b)-(4*a*c));
	if (D<0)
	    printf("\nThe roots are imaginary");
	else if(D==0)
	{
        x1=-b/(2*a);
        printf("\n\n\tThe values of x1=\t%f",x1);
        printf("\n\n\tThe roots are real and equal");
    }
    else
    {
        x1=((-b+sqrt(D))/(2*a));
        x2=((-b-sqrt(D))/(2*a));
        printf("\n\n\tThe roots of x1=\t%f",x1);
        printf("\n\n\tThe roots of x2=\t%f",x2);
         printf("\n\n\tThe roots are real");
    }
	return 0;
}
