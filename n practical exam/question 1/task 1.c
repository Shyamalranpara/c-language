#include <stdio.h>

void performAddition(float a, float b);
void performSubtraction(float a, float b);
void performMultiplication(float a, float b);
void performDivision(float a, float b);
void performModulus(int a, int b);

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                performAddition(num1, num2);
                break;
            case 2:
                performSubtraction(num1, num2);
                break;
            case 3:
                performMultiplication(num1, num2);
                break;
            case 4:
                performDivision(num1, num2);
                break;
            case 5:
                performModulus((int)num1, (int)num2);
                break;
            default:
                printf("Invalid choice. Please enter a number between 0 and 5.\n");
        }
    }

    printf("Exiting...\n");
    return 0;
}

void performAddition(float a, float b) {
    printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
}

void performSubtraction(float a, float b) {
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
}

void performMultiplication(float a, float b) {
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
}

void performDivision(float a, float b) {
    if (b != 0) {
        printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void performModulus(int a, int b) {
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    return 0;
}