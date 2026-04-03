// Linear Search : --

#include<stdio.h>

int main()  {
    int n,x;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);

    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Element found at index %d\n",i);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Element not found\n");
    }
    return 0;
}