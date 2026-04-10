
// Write data to FILE
#include<stdio.h>

int main() {
    FILE *FP;
    FP = fopen("data.txt","w"); // -- ANY FILE NAME [] 
    fprintf(FP,"Hello Arnav, Welcome to FILE Handling in C");
    fclose(FP);
    printf("Data Written Successfully");
    return 0;
}