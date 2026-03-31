// Prime Number Check Code Is Here --->

#include<stdio.h>
int main() {
    int num,i,flag = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    for(i = 2;i<=num/2;i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && num > 1) {
        printf("Prime Number : ");
    }
    else {
        printf("Not Prime Number : ");
    }
    return 0;
}


