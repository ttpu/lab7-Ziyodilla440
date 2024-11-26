#include <stdio.h>

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 12) {
        printf("Invalid input\n");
        return 1;
    }
    printf("%d\n", factorial(n));
    return 0;
}
