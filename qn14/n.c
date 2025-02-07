#include <stdio.h>
#include <math.h>

int main() {
    int n, num, originalNum, remainder, result, digits;
    n = 1000;

    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (num = 1; num <= n; num++) {
        originalNum = num;
        result = 0;
        digits = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++digits;
        }

        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits); 
            originalNum /= 10;
        }
        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

