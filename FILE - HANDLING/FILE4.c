// COUNT NUMBERS OF WORDS IN FILE: --

#include<stdio.h>
int main() {
    FILE *fp;
    char ch;
    int words = 0;

    fp = fopen("data.txt","r");

    while((ch = fgetc(fp)) != EOF) {
        if(ch == ' ' || ch == '\n') {
            words++;
        }
    }

    fclose(fp);
    printf("Total Words : %d",words + 1);
    return 0;
}