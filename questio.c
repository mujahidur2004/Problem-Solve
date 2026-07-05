#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a = 0, b = 1, c;

    printf("Prime Fibonacci numbers between 100 and 200 are:\n");

    while (1) {
        c = a + b;
        if (c > 200)
            break;
        if (c >= 100 && isPrime(c))
            printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
