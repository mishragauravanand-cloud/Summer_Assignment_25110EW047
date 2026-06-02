#include <stdio.h>

int main() {
    int n, n2, r = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    n2 = n;

    while (n != 0) {
        digit = n % 10;
        r = r * 10 + digit;
        n =n/ 10;
    }

    if (n2 == r)
        printf("%d is a Palindrome Number", n2);
    else
        printf("%d is not a Palindrome Number", n2);

    return 0;
}