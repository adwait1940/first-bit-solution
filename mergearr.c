#include <stdio.h>

void mergeArray(int arr1[], int arr2[], int merge[], int n1, int n2) {
    int i, j;
    
    for(i = 0; i < n1; i++) {
        merge[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merge[i + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merge[n1 + n2];

    
    mergeArray(arr1, arr2, merge, n1, n2);

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merge[i]);
    }
    printf("\n");

    return 0;
}