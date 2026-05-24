#include<stdio.h>

int main()
{
	float income, food, transport, entertainment, utilities, expances, save, remaining, saving, fexpance, texpance, eexpance, uexpance;
	printf("Enter your monthly income:\t");
	scanf("%f",&income);
	printf("Enter Food Expanse:\t");
	scanf("%f",&food);
	printf("Enter Transport Expanse:\t");
	scanf("%f",&transport);
	printf("Enter Entertainment Expanse:\t");
	scanf("%f",&entertainment);
	printf("Enter Utilities Expanse:\t");
	scanf("%f",&utilities);
	expances=food+transport+entertainment+utilities;
	remaining=income-expances;
	save=remaining;
	saving=(remaining/income)*100;
	fexpance=(food/expances)*100;
	texpance=(transport/expances)*100;
	eexpance=(entertainment/expances)*100;
	uexpance=(utilities/expances)*100;
	printf("Total monthly expenses:\t%.2f",expances);
	printf("\nRemaining balance after expenses:\t%.2f",remaining);
	printf("\nSavings amount :\t%.2f",save);
	printf("\nSavings amount percentage :\t%.2f%% of income",saving);
	printf("\nFood Expance percentage :\t%.2f%% of income",fexpance);
	printf("\nTransport Expance percentage :\t%.2f%% of income",texpance);
	printf("\nEntertainment Expance percentage :\t%.2f%% of income",eexpance);
	printf("\nUtility Expance percentage :\t%.2f%% of income",uexpance);
	if(saving>20)
 	    printf("\nExcellent Saving!");
	if(fexpance>40)
 	    printf("\nWarning: High spending in Food Expance");
 	else if(texpance>40)
 	    printf("Warning: High spending in Transport Expance"); 
	else if(eexpance>40)
 	    printf("Warning: High spending in Transport Expance");   
    else if(uexpance>40)
 	    printf("Warning: High spending in Utility Expance");
    if(expances>income)
	   printf("You are overspending!");
	return 0;
}
