// REVERSE STirng Using Pointers -

#include<stdio.h>
#include<stdlib.h>

void reverse(char *str) {
    char * start, *end, temp;

    start = str;

    end = str + strlen(str) - 1;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }
}

int main() {
    char str[100];
    printf("ENTER A STRING : ");
    scanf("%s",str);

    reverse(str);

    printf("REVERSED String : %s",str);

    return 0;
}