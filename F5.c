// Perfect Number :---|

// Example:|- Perfect Number me divisors ka sum == Original Number
// 6 -> 1 + 2 + 3 = 6 Ese Type okIe

#include<stdio.h>
int main() {
    int num,i;
    int sum = 0;

    printf("Enter the NUmber ");
    scanf("%d", &num);

    for(int i = 0; i<= num/2;i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    if(sum == num) {
        printf("Prefect Number:");
    }
    else {
        printf("Not Perfect :");
    }
}