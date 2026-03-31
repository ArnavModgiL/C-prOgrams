// Strong Number Check ---|

// strong number me digits ke factorial ka sum == original Number -|

// EXPL: 145 --> 1! + 4! + 5! = 145

#include<stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1;i<=n;i++) {
        f *= i;
    }
    return f;
    
}
int main() {
    int num,original , sum = 0,digit;

    printf("Enter Number: ");
    scanf("%d",&num);

    original = num;

    while(num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original) {
        printf("Strong Number: ");
    }
    else  {
        printf("Not Strong Number: ");
    }
    return 0;
}
