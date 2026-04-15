// Dynamic 2D ARRAY : ---

#include<stdio.h>
#include<stdlib.h>

int main() {
    int r = 2, c = 3;

    int **arr = (int **) malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++) {
        arr[i] = (int*) malloc (c * sizeof(int));
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arr[i][j] = i + j;
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j ++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;  i < r; i++) {
        free(arr[i]);
    }

    return 0;
}