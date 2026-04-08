// The Famous First + Last Occurrence Question : --

// ✔ Array sorted hona chahiye

/* Is program me:

User array size enter karega
User sorted array input karega
User element search karega
Program first aur last occurrence print karega */

#include <stdio.h>

int firstOccurrence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }

        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int n, x;
    printf("Enter Number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);

    if (first == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First Occurrence index: %d\n", first);
        printf("Last Occurrence index : %d\n", last);
        printf("Total Occurrences: %d\n", last - first + 1);
    }
    return 0;
}


/* Example Run :

Input:

Enter number of elements: 7
Enter 7 sorted elements:
1 2 4 4 4 5 6
Enter element to search: 4

Output:

First Occurrence index: 2
Last Occurrence index: 4
Total occurrences: 3 */