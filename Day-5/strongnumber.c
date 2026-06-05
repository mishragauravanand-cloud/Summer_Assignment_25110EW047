#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    while(n > 1) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}