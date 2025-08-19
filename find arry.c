#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    // Input array size
    printf("Enter the number of elements in  array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Search for the number
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = 1;
            break;
        }
    }

    return 0;
}