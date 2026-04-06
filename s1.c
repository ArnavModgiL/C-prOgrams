// Decimal To Binary converstion Question --:|

#include <stdio.h>
int main() {
    int num,binary[32];
    int i = 0;

    printf("Enter the nUMBER: ");
    scanf("%d",&num);

    while(num>0){
        binary[i] = num %2;
        num = num /2;
        i++;
    }
    printf("Binary:\n");

    for(int j = i-1;j>=0;j--) {
        printf("%d\n",binary[j]);
    }
    return 0;

}