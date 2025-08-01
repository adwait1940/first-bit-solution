#include <stdio.h>

int main() {
    int n = 5, i = 1;
    long long fact = 1;

    while (i <= n) {
        if (i > 0) {
            fact *= i;
        }
        i++;
    }

    printf("Factorial = %lld\n", fact);
    return 0;
}
