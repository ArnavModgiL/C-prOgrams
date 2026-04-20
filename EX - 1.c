// Factorial Using Recurstion :

#include<stdio.h>

int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    scanf("%d",&num);
    int result = factorial(num);
    printf("factorial of %d is %d",num,result);
    return 0;
}