#include<stdio.h>

void checkTemperature(int temp) {
    if(temp > 30) {
        printf("Temperature is Hot\n");
        return ;
    }
    
    if(temp < 20) {
        printf("Temperature is Cold\n");
        return ;

    }

    if(temp >= 20 && temp <= 30) {
        printf("Temperature is Normal\n");
    }
}

int main() {
    int temperature;

    printf("EnTer TemperaTure : -->");
    scanf("%d", &temperature);

    checkTemperature(temperature);
    return 0;
}