#include <stdio.h>

int reverse3DigitNumber(int num) {
    
    if (num < 100 || num > 999) {
        printf("The number is not a 3-digit number.\n");
        return -1; 
    }

    int reversed = 0;
    int original = num;
    
    while (num != 0) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    int reversed = reverse3DigitNumber(num);

    if (reversed != -1) {
        printf("The reversed number is: %d\n", reversed);
    }

    return 0;
}
