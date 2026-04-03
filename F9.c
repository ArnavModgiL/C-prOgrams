#include<stdio.h>

int main() {
    int n;

    printf("Enter Size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Element: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int second = -1;
    

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }

    }

    printf("Second Largest = %d", second);
    return 0;
}