// Question -- ALLOCATE MEMORY TO STORE FIRST 5 ODD NUBERS , THEN RELLOCATE IT TO STORE THE FIRST 6 EVEN NUMBERS --
#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++) {
        ptr[i] = 2 * i + 1; // odd vle ke liye --
    }

    printf("First 5 ODD Numbers: \n");

    for(int i = 0; i < 5; i++) {
        printf("%d ",ptr[i]);
    }

    ptr = (int *) realloc(ptr, 6 * sizeof(int));

    for(int i = 0; i < 6 ; i++) {
        ptr[i] = 2 * (i + 1); // even vle kiye liye --
    }

    printf("\nFirst 6 Even Numbers:\n");

    for(int i = 0; i < 6; i++) {
        printf("%d ",ptr[i]);
    }

    // FREE MEMORY -
    free(ptr);

    return 0;
}