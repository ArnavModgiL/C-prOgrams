#include<stdio.h>

void isSquare(int n) {
    if(n < 0) {
        printf("no");
        return ;
    }
    for(int i = 0; i * i <= n; i++) {
        if(i * i == n) {
            printf("yes");
            return;
        }
    }
    printf("no");
}

int main() {
    int num;
    scanf ("%d", &num);
    isSquare(num);
    return 0;
}