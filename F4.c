// Armstrong number = number ke digits ka cube ka sum = original number hota hai

#include <stdio.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0, rem;

    while(num != 0) {
        rem = num % 10;   // last digit ki liye .
        sum = sum + (rem * rem * rem);
        num = num / 10; // last digit remove ke liye .

    }

    if( sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a NUmber: ");
    scanf("%d", &n);

    if(isArmstrong(n)) {
        printf("Armstrong Number ");
    }
    else {
        printf("Not an Armstrong Number ");
    }
    return 0;

}
