// READ DATA FROM A FILE --

#include<stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt","r");
    fgets(str,100,fp);

    printf("DATA FROM FILE: %s",str);

    fclose(fp);
    return 0;

}