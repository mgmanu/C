#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}