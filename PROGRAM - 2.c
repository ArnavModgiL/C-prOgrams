// count Frequency fo each digit in Number : -

#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    int freq[10] = {0};

    while(n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n = n / 10;

    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0) {
            printf("%d -> %d\n",i,freq[i]);
        }
    }
    return 0;

}