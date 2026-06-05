#include <stdio.h>

int main() {
    int n, factor = 2, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 1) {
        if(n % factor == 0) {
            largest = factor;
            n /= factor;
        } else {
            factor++;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}