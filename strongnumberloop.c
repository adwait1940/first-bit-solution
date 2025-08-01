#include<stdio.h>

int main() {
    int n = 145, temp = n, sum = 0, digit, fact;

    while(temp != 0) {
        digit = temp % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}