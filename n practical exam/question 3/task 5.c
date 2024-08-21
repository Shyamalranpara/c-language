#include <stdio.h>
#include <string.h>

typedef struct {
    char model[50];
    int year;
    float price;
} Car;

void inputCarDetails(Car *car) {
    printf("Enter car model: ");
    scanf(" %[^\n]%*c", car->model); 
    printf("Enter car year: ");
    scanf("%d", &car->year);
    printf("Enter car price: ");
    scanf("%f", &car->price);
}

void displayCarDetails(const Car *car) {
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Price: %.2f\n", car->price);
}

int main() {
    int n;

    printf("Enter the number of cars: ");
    scanf("%d", &n);

    Car cars[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for car %d:\n", i + 1);
        inputCarDetails(&cars[i]);
    }

    printf("\nCar details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of car %d:\n", i + 1);
        displayCarDetails(&cars[i]);
    }

    return 0;
}
