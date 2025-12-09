#include <stdio.h>

int main() {
    int n, i = 2, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        while (i * i <= n) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
