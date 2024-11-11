#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);

        return binarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main() {
    int n,arr[10];
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element to search : ");
    scanf("%d",&key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    (result == -1) ? printf("Element is not present in array")
                  : printf("Element is present at index %d", result);
    return 0;
}