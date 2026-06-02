#include <stdio.h>

int main() {
    int n, digit, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        prod = prod* digit;
        n= n/ 10;
    }

    printf("Product of digits = %d", prod);

    return 0;
}