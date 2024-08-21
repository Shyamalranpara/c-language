#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Odd elements in the array are:\n");
    printOddElements(arr, n);

    return 0;
}

void printOddElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
