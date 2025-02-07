#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}

