#include <stdio.h>

int temperatureAlert(float temp);

int main() {
    float temp;
    printf("Enter current temperature (°C): ");
    scanf("%f", &temp);

    int code = temperatureAlert(temp);
    switch (code) {
        case 1:
		 printf("HEAT ALERT\n");
		 break;
        case 2: 
		  printf("COLD ALERT\n"); 
		  break;
        case 3: 
		  printf("COMFORT ZONE\n"); 
		  break;
        case 4:  
		  printf("NORMAL CONDITIONS\n"); 
		  break;
    }
    return 0;
}

int temperatureAlert(float temp) {
    if (temp > 35)
        return 1;
    else if (temp < 10)
        return 2;
    else if (temp >= 15 && temp <= 25)
        return 3;
    else
        return 4;
}

