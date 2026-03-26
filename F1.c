// IMPORTANT LOGICAL CODE --|

#include<stdio.h>
int compareStrings(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            return 1;  // show that strings different hai.
        }
        i++;
    }
    if(s1[i] == s2[i]) {
        return 0; // strings same hai --
        }
    else {
        return 1; // strings different hai --
    }
}

int main() {
    char s1[100],s2[100];

    printf("Enter first sT1");
    fgets(s1,100,stdin);

    printf("Enter second sT2");
    fgets(s2,100,stdin);

    if(compareStrings(s1,s2) == 0) {
        printf("Strings are Equal");
    }
    else {
        printf("Strings are Not Equal");
    }
    return 0;
}