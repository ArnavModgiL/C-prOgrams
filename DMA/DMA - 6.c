// Dynamic String Input -

#include<stdio.h>
#include<stdlib.h>

int main() {
    char *str;
    int n;

    printf("ENTER LENGTH : ");
    scanf("%d ",&n);

    str =(char* )malloc(n * sizeof(char));
    
    printf("ENTER STRING: ");
    scanf("%s",str);

    printf("YOU ENTERED : %s",str);

    free(str);
    return 0;

}