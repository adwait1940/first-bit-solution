#include <stdio.h>

int main() {
    int n = 35, sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect\n");
    } else {
        printf("Not Perfect\n");
    }

    return 0;
}
