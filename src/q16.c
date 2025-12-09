#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;
    scanf("%d", &n);

    if (n == 0) {
        factorial = 1;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= n);
    }

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}
