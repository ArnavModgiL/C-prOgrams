// BInary Search Question CoDe --:

#include<stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] < x) {
            low = mid + 1;
        }
        if (arr[mid] > x) {
            low = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n,x;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n",n);
    
    for(int i = 0; i< n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements to search: ");
    scanf("%d",&x);

    int result = binarySearch(arr , n, x);

    if(result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n",result);
    }
    return 0;
}