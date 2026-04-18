// Frequency OF EACH DigiT in The StrinG : 

#include<stdio.h>

int main() {
    int i,j;
    int count;
    char s[1000];
    printf("Enter the String: ");
    fgets(s,sizeof(s),stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        count = 1;
        if(s[i] != '\0') {
            continue;
        }

        for(int j = i + 1; s[j] != '\0';j++) {
            if(s[i] == s[j]) {
                count++;
                s[j] = '\0';
            }
        }
        if(s[i] != '\0') {
            printf("%c = %d\n",s[i],count);
        }
    }
    return 0;
}