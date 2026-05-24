#include<stdio.h>

int main()
{
    int no_vehicles, i, j, times, type, speed, total_fine=0, count=0, fine;
    printf("How many vehicles monitored: \t");
    scanf("%d",&no_vehicles);
    for(i=1;i<=no_vehicles;i++)
    {
        printf("\nVehicle No. %d",i);
        printf("\nEnter the number of times Vehicle was checked:");
        scanf("%d",&times);
        for(j=1;j<=times;j++)
        {
        	printf("\nCase %d",j);
            printf("\nEnter road type: \t");
            scanf("%d",&type);
            printf("Enter speed km/h: \t");
            scanf("%d",&speed);
            if(type==1 && speed>40)
            {
                fine=4;
                printf("\nSpeed limit exceed");
                printf("\nFine is: \t%d",fine);
                total_fine+=fine;
                count++;
            }
            else if(type==2 && speed>20)
            {
                fine=2;
                printf("\nSpeed limit exceeds");
                printf("\nFine is:\t%d",fine);
                total_fine+=fine;
                count++;
            }
            else
                printf("\nWithin limit\n");
        }
        printf("\nTotal Fine is:\t%d",total_fine);
        if(count>3){
            printf("\nBlack list");
            printf("\nVehicle %d is blacklisted",i);
            
		}
    }
    printf("\n%d car violate’s speed limit",count);
}
