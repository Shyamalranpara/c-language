#include <stdio.h>

int main() {
    int num;
    int firstDigit, lastDigit, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("The number is not a 3-digit positive integer.\n");
        return 1; 
    }

    lastDigit = num % 10;

    firstDigit = num / 100;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
