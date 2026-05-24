#include<stdio.h>
int main()
{
 	  char room, action;
	  printf("L=Living Room\nK=Kitchen\nEnter Room:\t");
	  scanf(" %c",&room);
	  printf("L=Lights\nT=Thermostate\nEnter Action:\t");
	  scanf(" %c",&action);	
	  switch(room)
	  {
	  	case 'L':
  		{
  			switch(action)
  			{
  				case 'L':
  					printf("Adjusting ambient lighting.");
				break;
				case 'T':
  					printf("Setting living room temperature.");
				break;
			}
		    break;
  		}
  		case 'K':
  		{
  			switch(action)
  			{
  				case 'L':
  					printf("Turning on bright task lighting.");
				break;
				case 'T':
  					printf("Setting kitchen temperature.");
				break;
		    }
  			break;
        }
        default:
        	printf("Invalid Input");
	  }
	  return 0;
}
