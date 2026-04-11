// APPEND DATA INTO FILE --:

#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt","a");
    fprintf(fp,"\nThis is appended text");

    fclose(fp);

    printf("DATA appended Successfully: ");
    return 0;
}