// Find Peak ElemenT : ---|

#include<stdio.h>

int findPeak(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while(low < high) {
        int mid = (low + high) / 2;

        if(arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int n;
    printf("Enter The NuMBER : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: \n");

    for(int i = 0; i < n ; i++) {
        scanf("%d",&arr[i]);
    }

    int peak = findPeak(arr,n);

    printf("Peak element index = %d\n",peak);
    printf("Peak Value = %d\n",arr[peak]);

    return 0;
}