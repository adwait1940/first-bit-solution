#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int min, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}