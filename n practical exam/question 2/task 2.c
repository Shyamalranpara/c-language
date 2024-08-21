#include <stdio.h>



int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    float average = calculateAverage(rows, cols, array);

    printf("The average of all elements in the array is: %.2f\n", average);

    return 0;
}

float calculateAverage(int rows, int cols, int array[rows][cols]) {
    int sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
    }

    return (float)sum / totalElements;
}
