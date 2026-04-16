// CHECK ASCENDING or Descending : -

#include<stdio.h>

int checkOrder(int arr[], int n) {
    int asc = 1, desc = 1;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            asc = 0;
        }
        if(arr[i]  < arr[i + 1]) {
            desc = 0;
        }
    }

    if(asc) return 1;
    if(desc) return 2;

    return 0;

}

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int res = checkOrder(arr, n);

    if(res == 1) {
        printf("Ascending");
    }
    else if (res == 2) {
        printf("Descending");
    }
    else {
        printf("Unsorted");
    }

    return 0;
}